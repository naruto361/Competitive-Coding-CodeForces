
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int nn=n;
    int f[50001]={0};
    int maxi=-1;
    while(n--) {int x;cin>>x;f[x]++;maxi=max(maxi,x);}
    int ans=0;
    for(int i=1;i<=nn;i++)
    {
        if(f[i]==0) ans++;
    }
    cout<<ans;
    return 0;
}
