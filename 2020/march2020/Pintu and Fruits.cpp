#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solver()
{
    int n,m;
    cin>>n;
    cin>>m;

    vector<int> p(n),f(n);

    for(int i=0;i<n;i++)
    {
        cin>>f[i];
    }

    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }


    unordered_map <int,int> map;

    // for(int i=0;i<m;i++)
    // {
    //     map[m]=0;
    // }

    for(int i=0;i<n;i++)
    {
        map[f[i]]+=p[i];
    }

    int ans=INT_MAX;
    for(auto itr:map)
    {
        ans=min(ans,itr.second);
    }

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

