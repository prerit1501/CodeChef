#include<iostream>
#include<cmath>
#define ll  long long int 
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll a,b,c,d,e,s,help;
        cin>>a;

        s=lround(2*pow(10,n))+a;
        help=lround(pow(10,n));
        // cout<<help;
        cout<<s<<endl;
        cin>>b;
        //ab bhai dekho kya karna ha 
        c=help-b;
        cout<<c<<endl;
        cin>>d;
        e=help-d;
        cout<<e<<endl;

        int why;
        cin>>why;

        if(a+b+c+d+e==s)
        {
            // cout<<1<<endl;
        }
        else
        {
            // cout<<-1<<endl;
            break;
        }
        
        

    }

    return 0;
}


