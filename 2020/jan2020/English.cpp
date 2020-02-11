#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
#include<set>
#define ll long long int

using namespace std;
//string should start with same letter and end with same 
ll stanza(string s1,string s2)
{
    int itr=0;
    ll ans=0;
    while(itr<s1.length()&&itr<s2.length())
    {
        if(s1[itr]==s2[itr]&&s1[s1.length()-itr-1]==s2[s2.length()])
        {
            ans++;
        }
        else
        {
            break;
        } 
        itr++;
    }
    return ans*ans;

}
ll solver(unordered_map<int,multiset<string>> &map,int pos)
{
    if(map[pos].size()<2)
    {
        return 0;
    }

    string first=*(map[pos].begin());

    int count =map[pos].count(first);
    map[pos].erase(first);
    for(int i=1;i<=count-1;i++)
    {
        map[pos].insert(first);
    }

    ll ans=-1;
    string beststring;


    for(auto itr:map[pos])
    {
        string option=itr;
        if(option[option.length()-1]==first[first.length()-1])
        {
            int count =map[pos].count(option);
            map[pos].erase(option);
            for(int i=1;i<=count-1;i++)
            {
                map[pos].insert(option);
            }
            
            ans =max(ans,stanza(option,first)+solver(map,pos));
            // cout<<ans<<endl;
            map[pos].insert(option);
        }

        

    }
    map[pos].insert(first);
    return ans;
    
}


int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;

        unordered_map<int,multiset<string>> map;

        for(int i=0;i<n;i++)
        {
            string temp;
            cin>>temp;
            int ans=temp[0]-97;
            map[ans].insert(temp);
        }

        ll ans=0;
        

        for(int pos=0;pos<=25;pos++)
        {
    
            ans+=solver(map,pos);
        }
        cout<<ans<<endl;

    }
    return 0;
}
