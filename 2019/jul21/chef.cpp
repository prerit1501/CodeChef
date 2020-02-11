#include<iostream>
#include<string>

using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        int count1=0,count2=0;
        for(int i=0;i<n;i++)
        {
            if(s1[i]=='1')
            {
                count1++;
            }
            if(s2[i]=='1')
            {
                count2++;
            }
        }
        if(count1==count2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        

    }

    return 0;
}
