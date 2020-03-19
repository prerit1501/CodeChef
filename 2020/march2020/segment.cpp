#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll query( vector<pair<ll,ll>> tree,int ss,int se,int qs,int qe,int index,ll y){
    ///Complete Overlap
    if(se<ss)
    {
        return 0;
    }
    if(ss==se)
    {
        if(y<=tree[index].second && y>=tree[index].first)
        {

            // cout<<tree[index].first<<" "<<tree[index].second<<endl;
            return 1;


        }
        else return 0;
    }

    if(tree[index].second ==0 &&tree[index].first==0)
    {
        return 0;

    }

    if(qe<ss || qs>se){
    return 0;
    }

    if(ss>=qs && se<=qe){
        // return tree[index];
        if(y>tree[index].second || y< tree[index].first )
        {
            return 0;
        }
        else
        {
            int mid = (ss+se)/2;
            int leftAns = query(tree,ss,mid,qs,qe,2*index,y);
            int rightAns  = query(tree,mid+1,se,qs,qe,2*index+1,y);
            return leftAns + rightAns;
        
        }
        
    }
    
    //No Overlap

    
    //Partial Overlap - Call both sides and update the current ans 
    int mid = (ss+se)/2;
    int leftAns = query(tree,ss,mid,qs,qe,2*index,y);
    int rightAns  = query(tree,mid+1,se,qs,qe,2*index+1,y);
    return leftAns + rightAns;
    
}


void buildTree(vector<pair<ll,ll>> & a,int s,int e,vector<pair<ll,ll>> &tree,int index){
    
    if(s==e){
        tree[index] = a[s];
        return ;
    }
    
    //Rec case
    int mid = (s+e)/2;
    buildTree(a,s,mid,tree,2*index);
    buildTree(a,mid+1,e,tree,2*index+1);
    // tree[index] = min(tree[2*index],tree[2*index+1]);
    pair <ll,ll> fir=tree[2*index],sec=tree[2*index+1];

    pair <ll,ll> val (min(fir.first,sec.first),max(fir.second,sec.second));

    tree[index]=val;
    
    return;
}

// void updateNode(int *tree,int ss,int se,int i,int increment,int index){
//     //Leaf updateNode
//     //Out of bounds - No Overlap
//     if(i>se||i<ss){
//         return;
//     }
    
//     //Leaf Node 
//     if(ss==se){
//         tree[index] += increment;
//         return;
//     }
    
//     //Left and Right - Call 
//     int mid = (ss+se)/2;
//     updateNode(tree,ss,mid,i,increment,2*index);
//     updateNode(tree,mid+1,se,i,increment,2*index+1);
//     tree[index] = min(tree[2*index],tree[2*index+1]);
//     return;
// }



void solver()
{

    int n,q;
    cin>>n>>q;

    vector<ll> arr(n);

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    vector <pair<ll,ll>> strg(n-1);


    for(int i=0;i<n-1;i++)
    {
        vector<ll> temp {arr[i],arr[i+1]};

        sort(temp.begin(),temp.end());

        pair <ll,ll> ins (temp[0],temp[1]);

        strg[i]=ins;
    }


    vector<pair<ll,ll>> tree (4*n);

    buildTree(strg,0,n-2,tree,1);

    for(auto itr: tree)
    {
        cout<<itr.first<<" "<<itr.second<<endl;
    }



    for(int i=0;i<q;i++)
    {
        int x1,x2,y;
        ll ans=0;
        cin>>x1>>x2>>y;

        x1;
        x2;
        // x1;
        // x2;

        if(x1==0)
        cout<<query(tree,0,n-1,4,4,1,y)<<endl;
        else
        {
            cout<<query(tree,0,n-1,0,4,1,y)<<endl;
        }
        

       
    }

}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solver();
    }
    return 0;
}

