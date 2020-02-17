#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solver()
{

    vector<ll> arr {0,1,5,5,1,5,6};

    ll m1,y1;
    cin>>m1>>y1;

    ll m2,y2;
    cin>>m2>>y2;

    if(m1>2)
    {
        y1++;
    }

    if(m2<2)
    {
        y2--;
    }

    if(y1>1800)
    {
        
        
        ll x1=(y1-26)/28;
        ll start=28*x1 +26;
        ll x2=(y2-26)/28;
        ll end=28*x2+26;

        if(start==end)
        {
            ll ans=0;

            ll temp = start;

            for(int i=0;i<arr.size();i++)
            {
                temp+=arr[i];
                if(temp>=y1 && temp<=y2)
                {
                    ans++;
                }
            }

            cout<<ans<<endl;
            return;
        }
        else if(end -start == 28)
        {
            ll ans=0;

            ll temp = start;

            for(int i=0;i<arr.size();i++)
            {
                temp+=arr[i];
                if(temp>=y1 && temp<=y2)
                {
                    ans++;
                }
            }

            temp=end;

            for(int i=0;i<arr.size();i++)
            {
                temp+=arr[i];
                if(temp>=y1 && temp<=y2)
                {
                    ans++;
                }
            }


            cout<<ans<<endl;
            return;
        }
        else
        {
            ll ans=0;
            ll temp = start;

            for(int i=0;i<arr.size();i++)
            {
                temp+=arr[i];
                if(temp>=y1 && temp<=y2)
                {
                    ans++;
                }
            }

            temp=end;

            for(int i=0;i<arr.size();i++)
            {
                temp+=arr[i];
                if(temp>=y1 && temp<=y2)
                {
                    ans++;
                }
            }

            ans += ((end -start)/28 -1)*7;
            cout<<ans<<endl;
            return;

        }
    }

    else if(y2<1700)
    {

        ll x1=(y1-10)/28;
        ll start=28*x1 +10;
        ll x2=(y2-10)/28;
        ll end=28*x2+10;

        if(start==end)
        {
            ll ans=0;

            ll temp = start;

            for(int i=0;i<arr.size();i++)
            {
                temp+=arr[i];
                if(temp>=y1 && temp<=y2)
                {
                    ans++;
                }
            }

            cout<<ans<<endl;
            return;
        }
        else if(end -start == 28)
        {
            ll ans=0;

            ll temp = start;

            for(int i=0;i<arr.size();i++)
            {
                temp+=arr[i];
                if(temp>=y1 && temp<=y2)
                {
                    ans++;
                }
            }

            temp=end;

            for(int i=0;i<arr.size();i++)
            {
                temp+=arr[i];
                if(temp>=y1 && temp<=y2)
                {
                    ans++;
                }
            }


            cout<<ans<<endl;
            return;
        }
        else
        {
            ll ans=0;
            ll temp = start;

            for(int i=0;i<arr.size();i++)
            {
                temp+=arr[i];
                if(temp>=y1 && temp<=y2)
                {
                    ans++;
                }
            }

            temp=end;

            for(int i=0;i<arr.size();i++)
            {
                temp+=arr[i];
                if(temp>=y1 && temp<=y2)
                {
                    ans++;
                }
            }

            ans += ((end -start)/28 -1)*7;
            cout<<ans<<endl;
            return;
        }
    }
    else
    {
        ll ans=0;
        vector<ll > year
        {
            1701,
            1702,
            1707,
            1713,
            1718,
            1719,
            1724,
            1729,
            1730,
            1735,
            1741,
            1746,
            1747,
            1752,
            1755,
            1761,
            1766,
            1767,
            1772,
            1777,
            1778,
            1783,
            1789,
            1794,
            1795,
            1800

        };

        for(int i=0;i<year.size();i++)
        {
            if(arr[i]>=y1 && arr[i]<=y2)
            {
                ans++;
            }
        }
                
        
        ll x1=1801;
        ll start=28*x1 +26;
        ll x2=(y2-26)/28;
        ll end=28*x2+26;

        if(start==end)
        {


            ll temp = start;

            for(int i=0;i<arr.size();i++)
            {
                temp+=arr[i];
                if(temp>=y1 && temp<=y2)
                {
                    ans++;
                }
            }


        }
        else if(end -start == 28)
        {
            ll ans=0;

            ll temp = start;

            for(int i=0;i<arr.size();i++)
            {
                temp+=arr[i];
                if(temp>=y1 && temp<=y2)
                {
                    ans++;
                }
            }

            temp=end;

            for(int i=0;i<arr.size();i++)
            {
                temp+=arr[i];
                if(temp>=y1 && temp<=y2)
                {
                    ans++;
                }
            }


        }
        else
        {

            ll temp = start;

            for(int i=0;i<arr.size();i++)
            {
                temp+=arr[i];
                if(temp>=y1 && temp<=y2)
                {
                    ans++;
                }
            }

            temp=end;

            for(int i=0;i<arr.size();i++)
            {
                temp+=arr[i];
                if(temp>=y1 && temp<=y2)
                {
                    ans++;
                }
            }

            ans += ((end -start)/28 -1)*7;


        }
        
         x1=(y1-10)/28;
        start=28*x1 +10;
        x2=1669;
         end=28*x2+10;

        if(start==end)
        {


            ll temp = start;

            for(int i=0;i<arr.size();i++)
            {
                temp+=arr[i];
                if(temp>=y1 && temp<=y2)
                {
                    ans++;
                }
            }


        }
        else if(end -start == 28)
        {


            ll temp = start;

            for(int i=0;i<arr.size();i++)
            {
                temp+=arr[i];
                if(temp>=y1 && temp<=y2)
                {
                    ans++;
                }
            }

            temp=end;

            for(int i=0;i<arr.size();i++)
            {
                temp+=arr[i];
                if(temp>=y1 && temp<=y2)
                {
                    ans++;
                }
            }


        }
        else
        {

            ll temp = start;

            for(int i=0;i<arr.size();i++)
            {
                temp+=arr[i];
                if(temp>=y1 && temp<=y2)
                {
                    ans++;
                }
            }

            temp=end;

            for(int i=0;i<arr.size();i++)
            {
                temp+=arr[i];
                if(temp>=y1 && temp<=y2)
                {
                    ans++;
                }
            }

            ans += ((end -start)/28 -1)*7;

        }

        cout<<ans<<endl;
        return;



    }
    

    
    



}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        solver();
    }
    return 0;
}
