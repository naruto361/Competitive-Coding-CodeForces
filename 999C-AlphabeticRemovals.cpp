#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n,k;cin>>n>>k;
    string s;cin>>s;
    vector<vector<int>> v(26);
    for(int i=0;i<s.length();i++)
    {
        v[s[i]-'a'].push_back(i);
    }
    vector<int> t(s.length(),0);
        for(int i=0;i<26;i++)
        {
            for(int j=0;j<v[i].size();j++)
            {
                if(k>0) k--,t[v[i][j]]=1;
                if(k<=0) break;
            }
            if(k<=0) break;
        } 
        string ans;
        for(int i=0;i<t.size();i++)
        {
            if(t[i]==0) ans+=s[i];
        }
    cout<<ans;
    return 0;
}
