#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;

    while(t--)
    {
        int s,w1,w2,w3;
        cin>>s>>w1>>w2>>w3;
        if(s>=6)
        {
            cout<<"1"<<endl;
        }
        else if(s==1)
        {
            cout<<"3"<<endl;
        }
        else if(s==2)
        {
            if(w1+w2+w3==6||w1+w2+w3==5)
            {
                cout<<"3"<<endl;
            }
            else if(w1+w2+w3==4)
            {
                if(w2==2)
                {
                    cout<<"3"<<endl;
                }
                else
                {
                    cout<<"2"<<endl;
                }
                
            }
            else 
            {
                cout<<"2"<<endl;
            }
        }
        else if(s==3)
        {
            if(w1+w2+w3==6)
            {
                cout<<"3"<<endl;
            }
            else if(w1+w2+w3==3)
            {
                cout<<"1"<<endl;
            }
            else
            {
                cout<<"2"<<endl;
            }

        }
        else if(s==4)
        {
            if(w1+w2+w3==6||w1+w2+w3==5)
            {
                cout<<"2"<<endl;
            }
            else
            {
                cout<<"1"<<endl;
            }
            

        }
        else if(s==5)
        {
            if(w1+w2+w3==6)
            {
                cout<<2<<endl;
            }
            else
            {
                cout<<1<<endl;
            }
            
        }
        
    }
    return 0;
}

