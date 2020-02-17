#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solver()
{
    ll n;
    cin>>n;

    vector<ll> arr1(n),arr2(n);

    for(int i=0;i<n;i++)
        cin>>arr1[i];

    for(int i=0;i<n;i++)
        cin>>arr2[i];

    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());

    ll ans=0;

    for(ll i=0;i<n;i++)
        ans+=min(arr1[i],arr2[i]);

    cout<<ans<<endl;
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
