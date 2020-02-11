#include<iostream>
#include<string>

using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int count=0;
        int lenght=s.length();
        for(int i=0;i<lenght;i++)
        {
            for(int j=1;j<=lenght-i;j++)
            {
                string temp=s.substr(i,j);
                // cout<<temp<<endl;
                int count0=0;
                int count1=0;
                int tl=temp.length();
                for(int k=i;k<=tl;k++)
                {
                    if(temp[k]=='0')
                    {
                        count0++;
                    }
                    else if(temp[k]=='1')
                    {
                        count1++;
                    }
                    
                }
                if(count0==(count1*count1))
                {
                    // cout<<count0<<" "<<count1<<" "<<temp<<" "<<count<<endl;
                    count++;
                }
                // cout<<endl;

            }
        }
        cout<<count<<endl;
        
        

    }

    return 0;
}
