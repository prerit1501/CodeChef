#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int exist(set<ll>c,ll a){
    int f=0;
                    if(c.find(a)!=c.end())
                {
                    f=1;

                }

    return f;
}
void sub1(vector<ll>&a,vector<ll>&b){

    set <ll>c;
    int flag=0,rmin=INT_MIN;
    for (int i = 0; i < a.size(); i++)
    {
        if(i==0){
        c.insert(a[i]);
        c.insert(b[i]);
        }
        else{
                if(a[i]>=b[i] ||exist(c,a[i])==0)
            {
                flag=1;
                break;
            }

            c.insert(a[i]);
            c.insert(b[i]);
        
        }

    }

    if(flag&1==1){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
    }
    return;

}
void func(){
    ll n;
    cin>>n;
    vector<ll>a(n,0);
    vector<ll>b(n,0);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    for (int f = 0; f < n; f++)
    {
        cin>>b[f];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end()); 

    sub1(a,b);

}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=0,s=0;

    cin>>t>>s;
    while(t--){

        func();

    }
    return 0;
}