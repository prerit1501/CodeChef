#include<iostream>
#include<unordered_map>
#include<cmath>
#define ll long long int

using namespace std;

int solver(unordered_map<ll,ll> &map,int itr,int n)
{
    for(auto itr:map)
    {
        
    }
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,sum=0;
        cin>>n;
        unordered_map<ll,ll> map;

        for(int i=0;i<2*n;i++)
        {
            ll temp;
            cin>>temp;
            sum+=temp;
            map[temp]++;
        }
        sum=sum/(n+1);

        if(map[sum]>=2)
        {
            if(n==1||n==2)
            {
                cout<<n<<endl;
            }
            else 
            {
                ll ans=1;
                ll itr=2*n-2;
                for(int i=1;i<=n-1;i++)
                {
                    ans*=itr;
                    itr--;
                }
                cout<<ans<<endl;
            }
            

        }
        else
        {
            cout<<0<<endl;
        }
        


    }

    return 0;
}

