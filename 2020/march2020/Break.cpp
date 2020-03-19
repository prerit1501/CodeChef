#include<bits/stdc++.h>
#define ll long long int

using namespace std;


void solver()
{
    int n,q;
    cin>>n;

    vector<ll> a(n),b(n);

    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i=0;i<n;i++)
        cin>>b[i];

    sort(a.begin(),a.end());

    sort(b.begin(), b.end());

    bool flag=true;
    int itr=0;

    set<ll> map;


    while (itr<a.size())
    {
        if(b[itr]>a[itr])
        {
            if(itr==0)
            {
                map.insert(b[itr]);
                map.insert(a[itr]);
            }
            else
            {
                if(map.find(a[itr])!=map.end())
                {
                    map.insert(b[itr]);
                    map.insert(a[itr]);
                }
                else
                {
                    flag=false;
                    break;
                }
                
            }
            
        }
        else
        {
            flag=false;
            break;
        }
        itr++;

    }
    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    

}

void solver2()
{
    
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,s;
    cin>>t>>s;
    while(t--)
    {
        if(s==1)
        solver();
        else
        {
            solver2();
        }
        
    }
    return 0;
}

