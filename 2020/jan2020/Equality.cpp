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
    vector<ll> arr(n+1);

    for(int i=1;i<=n;i++)
    {
        ll temp;
        cin>>temp;
        arr[i]=temp;
    }

   
    while(q--)
    {
        ll l,r;
        cin>>l>>r;

        // vector<int> strg(n+1,0);
        int neg=0,pos=0;

        for(int i=l;i<=r;i++)
        {
            if(i==l)
            {
                if(arr[i+1]>arr[i])
                {
                    // arr[i]=1;
                    pos++;
                }
                else if(arr[i+1]<arr[i])
                {
                    // arr[i]=-1;  
                    neg++;
                }
                
            }
            else if(i==r)
            {
                
            }
            else
            {
                if(arr[i+1]>arr[i]&&arr[i-1]>arr[i])
                {
                    // arr[i]=1;
                    pos++;
                }
                else if(arr[i+1]<arr[i]&&arr[i-1]<arr[i])
                {
                    // arr[i]=-1;
                    neg++;
                }
                   
            }   
            
        }
        // cout<<pos<<endl<<neg<<endl;

        if(pos==neg)
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
