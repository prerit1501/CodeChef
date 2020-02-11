#include<iostream>
#include<vector>
#define ll long long int
using namespace std;

bool CheckPalindrome(vector<vector<ll>> &arr,int i,int j,int len)
{
    int Inter=len/2;

    bool flag=true;
    // if()
    while(Inter)
    {
        if(arr[i][j+Inter]!=arr[i][j-Inter])
        {
            flag=false;
            break;
        }
        if(arr[i+Inter][j]!=arr[i-Inter][j])
        {
            flag=false;
            break;
        }
        Inter--;
    }
    return flag;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        vector<vector<ll>> arr (n);
        for(int i=0;i<n;i++)
        {
            arr[i]=vector<ll> (m);
            for(int j=0;j<m;j++)
            {
                ll temp;
                cin>>temp;
                arr[i][j]=temp;
            }
        }
        ll ans=n*m;
        int lx=1,ly=1,nr=n-2,nc=m-2;

        for(int len=3;len<=min(m,n);len+=2)
        {
            if(nr<lx||ly>nc)
            {
                break;
            }
            for(int i=lx;i<=nr;i++)
            {
                for(int j=ly;j<=nc;j++)
                {
                    if(CheckPalindrome(arr,i,j,len))
                    {
                        ans++;
                    }
                }
            }
            lx++;
            ly++;
            nr--;
            nc--;
        }

        cout<<ans<<endl;


    }
    
    return 0;
}
