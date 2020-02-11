#include<iostream>
#include<math.h>

using namespace std;

int main(int argc , char** argv )
{
    int t;
    cin>>t;
    while(t)
    {
        long x,y,k;
        cin>>x>>y>>k;
        long sum=(x+y)/k;
        if(sum%2==0)
        {
            cout<<"Chef"<<endl;
        }
        else
        {
            cout<<"Paja"<<endl;
        }
        




        t--;
    }
}