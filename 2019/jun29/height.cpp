#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main(int argc,char** argv)
{
    int t;
    cin>>t;
    
    while(t)
    {
            float sum=0;
            long n;
            cin>>n;
            long a[n];
            long b[n];
            
            for(int i=0;i<n;i++)
            {
                cin>>a[i];
            }
            for(int i=0;i<n;i++)
            {
                cin>>b[i];
            }
            sort(a,a+n);
            sort(b,b+n);
            cout<<endl;
            for(int i=0;i<n;i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
             for(int i=0;i<n;i++)
            {
                cout<<b[i]<<" ";
            }
            cout<<endl;

            for(int i=0;i<n;i++)
            {
                sum+=(a[i]+b[i])/2;
            }
        cout<<sum<<endl;









        t--;
    }



}