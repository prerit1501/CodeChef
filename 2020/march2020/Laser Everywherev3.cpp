#include<bits/stdc++.h>
#define ll long long int

using namespace std;

struct cmpStruct {
  bool operator() (int const & lhs, int const & rhs) const
  {
    return lhs > rhs;
  }
};

class myData
{
    public:

    ll rank;
    multiset <pair<ll,ll>> map;

    bool operator<(const myData& t) const
    { 
        return (this->rank > t.rank); 
    }
    // myData& operator=(const myData& other) const
    // { 
    //     copy(other.chap->begin(),other.chap)
    // } 
 



};

class myBigData
{
    public :
        multiset <myData> chap;

};




void solver()
{
    int n,q;
    cin>>n>>q;

    vector<ll> arr(n);

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    vector<myBigData> strg (n);

    for(int j=0;j<arr.size()-1;j++)
    {
        vector<ll> help;
        help.push_back(arr[j]);
        help.push_back(arr[j+1]);

        sort(help.begin(),help.end());

        pair<ll,ll> temp;
        temp.first=help[1];
        temp.second=help[0];

        if(j==0)
        {
            myData benjy;
            benjy.rank=1;
            benjy.map.insert(temp);
            
            myBigData yolo;
            yolo.chap.insert(benjy);
            strg[j]=yolo;
        }
        else
        {
            myBigData prev,cur;
            prev=strg[j-1];

            


            
        }
   
    }

    
    for(int i=0;i<q;i++)
    {
        int x1,x2,y;
        // ll ans=0;
        cin>>x1>>x2>>y;

        bool flag=false;
        

        x1--;
        x2--;
        if(x1==0)
        {

            myBigData pls=strg[x2-1];

            for(auto itr: pls.chap)
            {
                myData god=itr;

                for(auto itr2: god.map)
                {
                    if(y>=itr2.first && y<=itr2.second)
                    {
                        cout<<god.rank<<endl;
                        flag=true;
                        break;
                    }
                }
                if(flag)
                {
                    break;
                }
            }


        }
        else
        {

            ll left=0,right=0;
            bool flag1=false,flag2=false;
            myBigData pls=strg[x1-1];
            

            for(auto itr: pls.chap)
            {
                myData god=itr;

                for(auto itr2: god.map)
                {
                    if(y>=itr2.first && y<=itr2.second)
                    {
                        left=god.rank;
                        flag1=true;
                        break;
                    }
                }
                if(flag1)
                {
                    break;
                }
            }


            pls=strg[x2-1];
            

            for(auto itr: pls.chap)
            {
                myData god=itr;

                for(auto itr2: god.map)
                {
                    if(y>=itr2.first && y<=itr2.second)
                    {
                        right=god.rank;
                        flag2=true;
                        break;
                    }
                }
                if(flag2)
                {
                    break;
                }
            }
              cout<<right-left<<endl;   

            
        }


             


            
    }

            
}
        

    

    // for(int i=0;i<n;i++)
    // {
    //     myBigData temp=strg[i];
    //     cout<<i<<endl;

    //     for(auto itr: temp.chap)
    //     {
    //         myData hello=itr;
    //         cout<<itr.rank<<endl;

    //         for(auto dude : itr.map)
    //         {
    //             cout<<dude.first<<" "<<dude.second<<endl;
    //         }
    //     }
    //     cout<<endl;
    // }

    



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

