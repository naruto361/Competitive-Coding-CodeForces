#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
int k;
vector<ll> dp(100001,-1);
ll check(int i)
{
    if(i==0) return 1;
    if(dp[i]!=-1) return dp[i];
    ll ans=0;
    if(i>=k) ans=(ans%mod + check(i-k)%mod )%mod; // W
    ans= (ans%mod + check(i-1)%mod )%mod; //R
    return dp[i]=ans;
}
int main()
{
    int t;cin>>t>>k;
    ll f[100001]={0};
    for(int i=1;i<=100000;i++)
    {
        f[i]=check(i);
    }
    ll fs[100001]={0};
    for(int i=1;i<=100000;i++)
    {
        fs[i]+=fs[i-1]+f[i];
    }
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        cout<<(fs[y]-fs[x-1]+mod)%mod<<"\n";
    }
    return 0;
}
