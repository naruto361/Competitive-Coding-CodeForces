#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;cin>>t;
    int mini=1e9+1;
    int maxi=0;
    int f[t+1][2];
    for(int i=1;i<=t;i++)
    {
        int x,y;cin>>x>>y;
        f[i][0]=x;f[i][1]=y;
        mini=min(mini,x);
        maxi=max(maxi,y);
    }
    for(int i=1;i<=t;i++)
    {
        if(f[i][0]==mini && f[i][1]==maxi) {cout<<i;return 0;}
    }
    cout<<-1;
    return 0;
}
