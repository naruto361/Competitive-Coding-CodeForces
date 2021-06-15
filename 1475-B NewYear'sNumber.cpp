#include <bits/stdc++.h>
using namespace std;
bool dp[1000000+1];
int main()
{
    dp[2020]=true;dp[2021]=true;
    for(int i=4040;i<=1000000;i++)
    {
        dp[i]=dp[i-2020]||dp[i-2021];
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==2020 || n==2021) cout<<"YES\n";
        else if(n<4040) cout<<"NO\n";
        else if(n%2020==0 || n%2021==0) cout<<"YES\n";
        else
        {
            if(dp[n]) cout<<"YES\n";
            else cout<<"NO\n";
        }
    } 
}
