#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    if(k>n) {cout<<-1;return 0;}
    else if(k==n) {cout<<0<<" "<<0;return 0;}
    int ans=0;
    for(int i=n-1;i>=0;i--)
    {
        ans++;
        if(ans==k) {cout<<a[i]<<" "<<a[i];return 0;}
    }
    cout<<-1;
}
