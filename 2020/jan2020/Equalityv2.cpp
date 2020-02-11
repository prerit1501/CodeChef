#include<iostream>
#include<vector>
#define ll long long int

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
     ll q;
    cin>>q;
    vector<ll> arr(n+1,0);

    for(int i=1;i<=n;i++)
    {
        ll temp;
        cin>>temp;
        arr[i]=temp;
    }

    vector<int> strg (n+1);


    for(int i=1;i<=n;i++)
    {
        if(i==1)
        {
            if(arr[i+1]>arr[i])
            {
                // arr[i]=1;
                strg[i]=1;
            }
            else if(arr[i+1]<arr[i])
            {
                // arr[i]=-1; 
                strg[i]=-1; 
                
            }
            
        }
        else if(i==n)
        {
            
        }
        else
        {
            if(arr[i+1]>arr[i]&&arr[i-1]>arr[i])
            {
                // arr[i]=1;
                strg[i]=1;
            }
            else if(arr[i+1]<arr[i]&&arr[i-1]<arr[i])
            {
                // arr[i]=-1;
                strg[i]=-1;
            }
                
        }  
    }

    // for(int i=1;i<=n;i++)
    // {
    //     cout<<strg[i]<<" ";
    // }
    // cout<<endl;


    vector<int> prefix(n+1,0);
    prefix[1]=strg[1];
    int sum=strg[1];
    for(int i=2;i<=n;i++)
    {
        prefix[i]=prefix[i-1]+strg[i];
        // sum=prefix[i];
    }

   
    while(q--)
    {
        ll l,r;
        cin>>l>>r;
        int temp=0;
        if(arr[l+1]>arr[l])
            {
                // arr[i]=1;
                temp=1;
            }
            else if(arr[l+1]<arr[l])
            {
                // arr[i]=-1; 
                temp=-1; 
                
            }

        int ans=prefix[r]-prefix[l-1]-strg[r]-strg[l]+temp;
        // for(int i=l)

      
        if(ans==0)

        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        


    }

    return 0;
}
