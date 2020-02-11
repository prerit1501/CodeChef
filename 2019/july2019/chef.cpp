#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(int argc, char** argv)
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        double arr[n];
        double sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
            // cout<<arr[i]<<" ";
        }
        double mean=sum/n;
        // cout<<endl<<mean<<endl;
        for(int i=0;i<n;i++)
        {
            if(mean==arr[i])
            {
                cout<<i+1<<endl;
                break;
            }
            else if(i==n-1)
            {
                cout<<"Impossible"<<endl;
            }

        }








    }
}