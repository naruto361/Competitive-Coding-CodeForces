#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
	  cin.tie(NULL); cout.tie(NULL);
    int n;cin>>n;
    string s;cin>>s;
    int f[26]={0};
    for(char c:s) f[c-'a']++;
    for(int i=0;i<26;i++)
    {
        if(f[i]%n!=0)
        {
            cout<<-1;return 0;
        }
    }
    string ans;
    for(int i=0;i<26;i++)
    {
        int l=f[i]/n;
        if(l>0)
        for(int j=0;j<l;j++)
         ans+=char(97+i),f[i]--;
    }
    string t;
    while(n>0)
    {
        t+=ans;
        n--;
    }
    cout<<t;
    return 0;
}
