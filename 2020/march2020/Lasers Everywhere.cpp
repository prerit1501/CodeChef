#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solver()
{

    int n,q;
    cin>>n>>q;

    vector<ll> arr(n);

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    vector<unordered_map<ll,ll>> map (n);

    for(int j=0;j<arr.size()-1;j++)
    {

        if(arr[j+1]>=arr[j])
        {
            for(ll i =arr[j] ; i<=arr[j+1];i++)
            {
                map[j][i]++;
            }
        }
        else
        {
            for(ll i=arr[j+1];i<=arr[j];i++)
            {
                map[j][i]++;
            }
        }
        // map[j]=temp;
    }

    // for(int i=0;i<map.size();i++)
    // {
    //     cout<<"*"<<i<<" "<<i+1<<endl;
    //     for(auto itr:map[i])
    //     {
    //         cout<<itr.first<<" "<<itr.second<<endl;
    //     }
    // }

    for(ll i =1;i < map.size();i++)
    {
        for(auto itr : map[i-1])
        {
            map[i][itr.first]+=itr.second;
        }
    }

    cout<<"0 - 1"<<endl;

    for(auto itr : map[0])
    {
        cout<<itr.first<<" "<<itr.second<<endl;
    }

    for(ll i =1;i <map.size();i++)
    {
        cout<<0<<" - "<<i+1<<endl;
        for(auto itr : map[i])
        {
            cout<<itr.first<<" "<<itr.second<<endl;
        }
    }



    for(int i=0;i<q;i++)
    {
        int x1,x2,y;
        // ll ans=0;
        cin>>x1>>x2>>y;

        x1--;
        x2--;
        if(x1==0)
        {

            mybi


        }
        else
        {

            cout<<map[x2-1][y]-map[(x1-1)][y]<<endl;
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

