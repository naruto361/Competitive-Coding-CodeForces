#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
   int n,k;cin>>n>>k;
    ll a[n],b[n]; 
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        if(b[i]==1)
        {
            ans+=a[i];
            a[i]=0;
        }
    }
    ll sum=0,maxi=0;
    for(int i=0;i<k;i++)
    {
        sum+=a[i];
    }
    maxi=sum;
    //cout<<sum<<" "<<maxi<<endl;
    for(int i=1;i<=n-k;i++)
    {
        sum-=a[i-1];
        sum+=a[i+k-1];
        maxi=max(sum,maxi);
        //cout<<sum<<" "<<maxi<<endl;
    }
    cout<<maxi+ans;
    return 0;
}
