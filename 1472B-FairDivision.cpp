#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int one=0,two=0;
        while(n--)
        {
            int x;cin>>x;
            if(x&1) one++;
            else two++;
        }
        if(one&1 || n==1) cout<<"NO\n";
        else if(one==0 && two&1) cout<<"NO\n";
        else cout<<"YES\n";
    }
}
