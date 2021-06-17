#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int> a(n,0);
        for(int i=0;i<n;i++) {int x;cin>>x;a[i]=x;}
        int mini=a.back();
        int ans=0;
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]>mini) ans++;
            else mini=a[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}
