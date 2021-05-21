#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    int n,x,y;cin>>n>>x>>y;
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        if(i>x && n-i<=y) ans++;
    }
    cout<<ans;
    return 0;
}
