#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    long long int t;
    cin>>t;
    while(t--){

    long long int n,tar,sum=0,flag=0;
    cin>>n>>tar;

    vector<long long int>den(n,0);
    vector<long long int>fc(n,0);

    for(int i=0;i<n;i++){
        cin>>den[i];
    }
    cout<<"HELlo"<<endl;
    while(sum<tar){
        for(int i=0;i<den.size();i++){
            if(tar%den[i]==0){
                continue;
            }
            else{
                sum+=den[i];
                fc[i]+=1;
            }
        }
        if(sum>tar){
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"YES ";
        for(int i=0;i<n;i++){
            cout<<fc[i]<<" ";
         }

    }
    else
    {

        cout<<"NO"<<endl;
    }
}

    return 0;
}