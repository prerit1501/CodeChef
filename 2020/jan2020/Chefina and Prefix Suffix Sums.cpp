#include<iostream>
#include<vector>
#define ll long long int
using namespace std;

int main(int argc, char const *argv[])
{
    ll t;
    cin>>t;
    while(t--)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        ll n;
        cin>>n;

        ll sum=0;

        vector<ll> arr(2*n);

        for(int i=0;i<2*n;i++)
        {
            ll temp;
            cin>>temp;
            sum+=temp;
            arr[i]=temp;
        }

        sum=sum/(n+1);


    }
    return 0;
}
