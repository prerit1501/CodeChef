#include<bits/stdc++.h>
#define ll long long int

using namespace std;

void solver()
{
    int r_int,c_int;
    cin>>r_int>>c_int;

    if(r_int < c_int)
    {
        while(r_int!=c_int)
        {
            r_int++;
            c_int--;
        }

        cout<<43<<endl;
        cout<<r_int<<" "<<c_int<<endl;
    }
    else if(r_int > c_int)
    {
        while(r_int!=c_int)
        {
            r_int--;
            c_int++;
        }

        cout<<43<<endl;
        cout<<r_int<<" "<<c_int<<endl;

    }
    else if(r_int == c_int  )
    {
        cout<<43<<endl;
        cout<<r_int<<" "<<c_int<<endl;
    }

    cout<<1<<" "<<1<<endl;
    cout<<2<<" "<<2<<endl;
    cout<<1<<" "<<3<<endl;
    cout<<2<<" "<<4<<endl;
    cout<<1<<" "<<5<<endl;
    cout<<2<<" "<<6<<endl;
    cout<<1<<" "<<7<<endl;
    cout<<2<<" "<<8<<endl;
    cout<<3<<" "<<7<<endl;
    cout<<4<<" "<<8<<endl;
    cout<<3<<" "<<7<<endl;
    cout<<4<<" "<<6<<endl;
    cout<<3<<" "<<5<<endl; 
    cout<<4<<" "<<4<<endl;
    cout<<3<<" "<<3<<endl;
    cout<<4<<" "<<2<<endl;
    cout<<3<<" "<<1<<endl;
    cout<<4<<" "<<2<<endl;
    cout<<5<<" "<<1<<endl;
    cout<<4<<" "<<2<<endl;
    cout<<5<<" "<<3<<endl; 
    cout<<4<<" "<<4<<endl;       
    cout<<5<<" "<<5<<endl;
    cout<<4<<" "<<6<<endl;
    cout<<5<<" "<<7<<endl;
    cout<<4<<" "<<8<<endl;   
    cout<<5<<" "<<7<<endl;
    cout<<6<<" "<<8<<endl;
    cout<<7<<" "<<7<<endl;
    cout<<6<<" "<<6<<endl;
    cout<<7<<" "<<5<<endl;
    cout<<6<<" "<<4<<endl;
    cout<<7<<" "<<3<<endl;  
    cout<<6<<" "<<2<<endl;
    cout<<7<<" "<<1<<endl; 
    cout<<8<<" "<<2<<endl;
    cout<<7<<" "<<3<<endl;
    cout<<8<<" "<<4<<endl;
    cout<<7<<" "<<5<<endl;
    cout<<8<<" "<<6<<endl;
    cout<<7<<" "<<7<<endl;
    cout<<8<<" "<<8<<endl;

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

