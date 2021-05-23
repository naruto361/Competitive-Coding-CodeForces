
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n;cin>>n;
    int x;cin>>x;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int ans=0;
    sort(a,a+n);
    for(int i=0 ; i<n,x>0 ; i++,x--)
    {
        if(a[i]>=0) break;
         ans-=a[i];
    }
    cout<<ans;
    return 0;
}
