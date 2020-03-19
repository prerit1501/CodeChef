#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solver()
{
    int n,k;
    cin>>n>>k;

    vector<vector<int>> arr(k);

    for(int i=0; i< k;i++)
    {
        arr[i]=vector<int> (n);

        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    vector<vector<bool>> map (n+1);

    for(int i=0;i<n;i++)
    {
        map[i]=vector<bool> (n+1,false);
    }

    for(int i=0;i<k;i++)
    {
        for(int j=0;j<n;j++)
        {
            
        }
    }

    
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solver();
    }
    return 0;
}

