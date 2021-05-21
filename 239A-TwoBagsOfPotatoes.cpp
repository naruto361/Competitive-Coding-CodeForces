#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll y,k,n;cin>>y>>k>>n;
    if(y==n)
    {
        cout<<-1;return 0;
    }
    vector<ll> v;
    int maxi=n-y;
    ll r=y%k;
    for(ll i=k-r;i<=maxi;i+=k)
    {
        if(i>0)
        v.push_back(i);
    }
    if(v.size()==0)
    {
        cout<<-1;return 0;
    }
    for(ll i:v) cout<<i<<" ";
    return 0;
}
