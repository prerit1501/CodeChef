#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int perm(vector<vector<ll>> arr,string ques,int itr)
{
    if(itr==ques.length())
    {
        int ans=0;
        vector <ll> strg {
            arr[(ques[0]-65)][0],
            arr[(ques[1]-65)][1],
            arr[(ques[2]-65)][2],
            arr[(ques[3]-65)][3],
            };

        
        sort(strg.begin(),strg.end(),greater<>() );


        int price=100;
        for(int i=0;i<4;i++)
        {
            if(strg[i]==0)
            {
                ans-=100;
            }
            else
            {
                ans+=strg[i]*price;
            }

            price-=25;
            
        }
        return ans;
    }

    int ans=-500;
    for(int i=itr;i<ques.length();i++)
    {
        string ques2=ques;
        char ch=ques2[itr];
        ques2[itr]=ques2[i];
        ques2[i]=ch;

        ans=max(ans,perm(arr,ques2,itr+1));
    }

    return ans;
}

int solver()
{
    vector<vector<ll>> arr (4);
    for(int i=0;i<4;i++)
    {
        arr[i]= vector<ll> (4,0);
    }

    ll n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        char m;
        cin>>m;
        int t;
        cin>>t;

        arr[m-65][t/3-1]++;
    }

    int ans=perm(arr,"ABCD",0);

    cout<<ans<<endl;

    return ans;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    ll ans=0;
    while(t--)
    {
        
        ans+=solver();
    }

    cout<<ans<<endl;
    return 0;
}
