//english question v2
#include<iostream>
#include<vector>
#define ll long long int

using namespace std;
// ll solver()

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<vector<string>> arr(26);

        for(int i=0;i<n;i++)
        {
            string temp;
            cin>>temp;
            arr[temp[0]-97].push_back(temp);
        }

        ll ans=0;
        for(int i=0;i<26;i++)
        {

        }
    }
    return 0;
}
