#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int ans[n]={0};
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int s=0;
        for(int i=n-1;i>=0;i--)
        {
            s=max(s,a[i]);
            if(s>0) ans[i]=1;
            s--;
        }
        for(int i=0;i<n;i++) cout<<ans[i]<<" ";
        cout<<endl;
    }
}
