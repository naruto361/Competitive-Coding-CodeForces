#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;cin>>n;
    ll a[n];
    ll sum=0;
    for(int i=0;i<n;i++) {cin>>a[i];sum+=a[i];}
    if(n<3) {cout<<0;return 0;}
    if(sum%3!=0)
    {
        cout<<0;return 0;
    }
    sum/=3;
    ll sum2=sum*2;
    ll s=0;
    vector<ll> v1,v2;
    for(int i=0;i<n;i++)
    {
        s+=a[i];
        if(s==sum) v1.push_back(i);
        if(s==sum2 && i!=n-1) v2.push_back(i);
    }
    ll ans=0;
    int l=v2.size();
    for(int i=0;i<v1.size();i++)
    {
        ans+=v2.end()- upper_bound(v2.begin(),v2.end(),v1[i]);
    }
    cout<<ans;

    return 0;
}
