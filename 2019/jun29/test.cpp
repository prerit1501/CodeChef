#include<iostream>
#include<math.h>

using namespace std;

int main(int argc , char** argv )
{
    int x;
    cin>>x;
    while(x)
    {
        long long q;
        long long n;
        cin>>n>>q;
        long long sum=0;
        long long * arr=new long long[n+1];
        for(int i=1;i<=n;i++)
        {
            arr[i]=i;
        }
        // for(int i=0;i<n;i++)
        // {
        //     cout<<arr[i]<<" ";
        // }
        for(int c=1;c<=q;c++)
        {
            
            int t;
            cin>>t;
            if(t==1)
            {
                long long p;
                cin>>p;
                p=(sum%n)+p;
                arr[p]=0;

            }
            else
            {
                long long p,q;
                cin>>p>>q;
                int max=0;
                p=(sum%n)+p;
                q=(sum%n)+q;
                for(int i=p;i<=q;i++)
                {
                    if(arr[i]>max)
                    {
                        max=arr[i];
                        
                    }
                }
                sum+=max;
                cout<<max<<endl;



            
            }
        // for(int i=1;i<=n;i++)
        // {
        //     cout<<arr[i]<<" ";
        // }
        // cout<<endl;
            
        }




        x--;
    }
}