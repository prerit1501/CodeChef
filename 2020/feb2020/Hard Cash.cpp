#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solver()
{
    ll n,k;
    cin>>n>>k;

    vector<ll> arr(n);

    ll ans1=0;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        ans1+=arr[i]%k;
    }

    // vector<ll> pre(n);

    // pre[0]=arr[0];

    // for(int i=1;i<n;i++)
    // {
    //     pre[i]=pre[i-1]+arr[i];
    // }

    // vector<ll> cost (n);

    // for(int i=0;i<n;i++)
    // {
    //     if(arr[i]%k==0)
    //     {
    //         cost[i]=0;
    //     }
    //     else
    //     {
    //         cost[i]=k - arr[i]%k;
    //     }    
    // }

    // vector<ll> suf(n);

    // suf[n-1]=cost[n-1];

    // for(int i=n-2;i>=0;i--)
    // {
    //     suf[i]=suf[i+1]+cost[i];
    // }


    // // ll ans=INT64_MAX;
    // ll ans=suf[0];

    // // for(int i=0;i<n;i++)
    // // {
    // //     cout<<pre[i]<<" ";
    // // }

    // // cout<<endl;

    // // for(int i=0;i<n;i++)
    // // {
    // //     cout<<suf[i]<<" ";
    // // }

    // // cout<<endl;
    // for(int i=n-2;i>0;i--)
    // {
    //     ll left=pre[i];
    //     ll right=suf[i+1];

    //     if(right > left)
    //     {
    //         break;
    //     }
    //     else
    //     {
    //         left=left-right;
    //         left=left-(left/k)*k;
    //         ans=min(ans,left);
    //     }
    

    // }

    // cout<<ans<<endl;
    if(ans1<k)
    {
        cout<<ans1<<endl;
    }
    else
    {
        ans1=ans1-(ans1/k)*k;
        cout<<ans1<<endl;
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
