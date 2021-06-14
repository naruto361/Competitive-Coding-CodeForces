#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;cin>>n>>m;
    int f[n+1]={0};
    for(int i=0;i<m;i++)
    {
        int maxi=-1,idx=0;
        for(int j=0;j<n;j++)
        {
            int x;cin>>x;
            if(x>maxi) {
                maxi=x;idx=j+1;
            }
        }
        f[idx]++;
    }
    int maxi=0,idx=0;
    for(int i=1;i<=n;i++)
    {
        if(f[i]>maxi)
        {
            maxi=f[i];idx=i;
        }
    }
    if(idx!=0)
    cout<<idx;
    else cout<<1;
}
