#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int t;cin>>t;
    while(t--)
    {
        int x;cin>>x;
        if(__builtin_popcount(x)==1) cout<<x-1;
        else{
            int ans=1;
            while(ans*2<x) ans=ans*2;
            cout<<ans-1;
        }
        cout<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    solve();
    return 0;
}
