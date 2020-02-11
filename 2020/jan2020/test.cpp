#include<iostream>
#include<cmath>
#include<set>
#include<string>
#include<unordered_map>
#define ll long long int 

using namespace std;
ll stanza(string s1,string s2)
{
    int itr=0;
    ll ans=0;
    while(itr<s1.length()&&itr<s2.length())
    {
        if(s1[itr]==s2[itr])
        {
            ans++;
        }
        else
        {
            break;
        } 
        itr++;
    }
    return ans;

}

int main(int argc, char const *argv[])
{
    // cout<<stanza("prerit","prerit");
    unordered_map<int,multiset<string>> map;
    int pos='p'-97;
    string first="prerit";
    map[pos].insert("prerit");
    map[pos].insert("prerit");
    map[pos].insert("prerit");
    map[pos].insert("prerit");
    map[pos].insert("prerit");
    map[pos].insert("prerit");
    for(auto itr:map[pos])
    {
        cout<<itr<<" ";
    }
    cout<<endl;
    int count =map[pos].count(first);
    cout<<count<<endl;
    map[pos].erase(first);
    for(int i=1;i<=count-1;i++)
    {
        map[pos].insert(first);
    }
    for(auto itr:map[pos])
    {
        cout<<itr<<" ";
    }
    return 0;
}
