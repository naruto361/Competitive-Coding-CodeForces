#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n,m;cin>>n>>m;
    ll a[n],b[m];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<m;i++) cin>>b[i];
    for(int i=0;i<m;i++)
    {
        auto it=upper_bound(a,a+n,b[i])-a;
        ll ans=0;
        if(it!=-1 || it!=n) ans=it+1;
        if(a[it]>b[i]) ans--;
        cout<<ans<<" ";
    }
    return 0;
}
