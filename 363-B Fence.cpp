#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
int main()
{
    int n,k;cin>>n>>k;
    ll a[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];
    ll idx=1,mini=0,sum=0;
    for(int i=1;i<=k;i++)
    {
        sum+=a[i]; 
    }
    mini=sum;
    //cout<<sum<<" "<<mini<<endl;
    for(int i=2;i<=n-k+1;i++)
    {
        sum-=a[i-1];
        sum+=a[i+k-1];
        
        if(sum<mini)
        {
            mini=sum;idx=i;
        }
        //cout<<sum<<" "<<mini<<endl;
    }
    cout<<idx;
}
