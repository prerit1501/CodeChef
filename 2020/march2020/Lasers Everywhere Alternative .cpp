#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solver()
{
    ll n,m,k,q;
    cin>>n>>m>>k>>q;

    vector<pair<ll,ll>> query(q);

    ll q_min=INT_MAX,q_max=INT_MIN;

    for(int i=0;i<q;i++)
    {
        pair<ll,ll> temp;

        ll l,r;

        cin>>l>>r;

        temp.first=l;
        temp.second=r;

        q_min=min(q_min,l);

        q_max=max(q_max,r);

        query[i]=temp;

    }


    if(k==3)
    {
        if(q<=k)
        {
            vector<ll> ans (q);

            for(int i=0;i<k;i++)
            {
                        
            }

        }
        else
        {
            
        }
        
    }
    else if(k==100)
    {

    }
    else
    {

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
