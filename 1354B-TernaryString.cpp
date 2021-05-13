#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        int ans=INT_MAX;
        int f[4];
        memset(f,-1,sizeof(f));
        for(int i=0;i<s.length();i++)
        {
            f[s[i]-'0']=i;
            if(f[1]!=-1 && f[2]!=-1 && f[3]!=-1)
            {
                ans=min(ans,max(f[1],max(f[2],f[3])) - min(f[1],min(f[2],f[3])) );
            }
        }
        if(ans==INT_MAX) cout<<0;
        else cout<<ans+1;
        cout<<"\n";
    }
}
