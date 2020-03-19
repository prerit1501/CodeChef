    #include<bits/stdc++.h>
    #define ll long 

    using namespace std;

    int computeParityBruteForce(long no) {
        no ^= (no >> 32);
        no ^= (no >> 16);
        no ^= (no >> 8);
        no ^= (no >> 4);
        no ^= (no >> 2);
        no ^= (no >> 1);

        return (short) (no & 1);
    }
    void solver()
    {
        ll q,n;
        cin>>n>>q;

        vector<ll> arr(n);

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        int odd=0,even=0;

        for(int i=0;i<n;i++)
        {
            if(computeParityBruteForce(arr[i]))
            {
                even++;
            }
            else
            {
                odd++;
            }
            
        }

        

        for(int i=0;i<q;i++)
        {
            ll p;
            cin>>p;

            if(computeParityBruteForce(p))
            {
                printf("%d %d \n",even,odd);
            }
            else
            {
                printf("%d %d \n",odd,even);
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

