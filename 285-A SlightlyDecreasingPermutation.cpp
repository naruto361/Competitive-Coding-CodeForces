#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;cin>>n>>k;
    if(k==0)
    {
        for(int i=1;i<=n;i++) cout<<i<<" ";
        return 0;
    }
    if(k==n-1)
    {
        for(int i=n;i>=1;i--) cout<<i<<" ";
        return 0;
    }
    else
    {
        for(int i=n,j=1;j<=k;j++,i--) cout<<i<<" ";
        for(int i=1;i<=n-k;i++) cout<<i<<" ";
    }
}
