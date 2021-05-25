
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int maxi=INT_MIN,mini=INT_MAX;
    int mii=n+1,mai=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]>maxi)
        {
            maxi=a[i];
            mai=i;
        }
        if(a[i]<=mini)
        {
            mini=a[i];
            mii=i;
        }
    }
    if(mai<mii)
    {
        cout<<mai+(n-1-mii);
    }
    else cout<<mai+(n-1-mii)-1;
    return 0;
}
