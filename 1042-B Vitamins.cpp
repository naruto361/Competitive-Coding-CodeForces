#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;cin>>t;
    vector<int> f(7,1000001);
    while(t--)
    {
        int x;string s;
        cin>>x>>s;
        sort(s.begin(),s.end());
        if(s=="A") f[0]=min(f[0],x);
        else if(s=="B") f[1]=min(f[1],x);
        else if(s=="C") f[2]=min(f[2],x);
        else if(s=="AB") f[3]=min(f[3],x);
        else if(s=="BC") f[4]=min(f[4],x);
        else if(s=="AC") f[5]=min(f[5],x);
        else if(s=="ABC") f[6]=min(f[6],x);
    }
    int ans=0;
    ans=min(f[6],f[0]+f[1]+f[2]);
    ans=min(ans,min(f[0]+f[4],f[3]+f[5]));
    ans=min(ans,min(f[1]+f[5],f[3]+f[4]));
    ans=min(ans,min(f[2]+f[3],f[5]+f[4]));
    if(ans==1000001 || ans==0) cout<<-1;
    else cout<<ans;
    return 0;
}
