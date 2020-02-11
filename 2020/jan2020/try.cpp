#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> arr(10);
    arr.push_back(10);
    arr.push_back(9);
    arr.push_back(100);
    arr.push_back(0);
    for(auto itr:arr)
    {
        cout<<itr<<" ";
    }
    cout<<arr[100]<<endl;
    return 0;
}
