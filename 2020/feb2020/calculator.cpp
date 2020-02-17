#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;

    ll start=1794,adder=28;
    ll end= 2010;

    vector<ll> arr {0,1,5,5,1,5,6};

    // cout<<"{";

    while(start<=end)
    {
        ll temp=start;
        for(int i=0;i<arr.size();i++)
        {
            temp+=arr[i];
            cout<<temp<<" , ";
        }
        start+=28;
    }

    // cout<<"}";

    return 0;
}
