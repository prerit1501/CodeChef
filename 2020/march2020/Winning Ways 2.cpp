#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solver()
{
    ll n,q;
    cin>>n;

    vector<ll> arr(n);

    for(int i=0;i<n;i++)
        cin>>arr[i];

    cin>>q;

    while(q--)
    {
        ll l,r;

        cin>>l>>r;

        unordered_map<ll,ll> map;

        for(int i=l;i<=r;i++)
        {
            map[arr[i]]++;
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

