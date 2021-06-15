#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,l,r;cin>>n>>l>>r;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int ans=0;
        sort(a,a+n);
        int i=0,j=n-1;
        ll x=0,y=0;
        while(i<j)
        {
            if(a[i]+a[j]<=r)
            {
                x+=j-i,i++;
            }
            else j--;
        }
        i=0;j=n-1;
        while(i<j)
        {
            if(a[i]+a[j]<l) y+=j-i,i++;
            else j--;
        }
        cout<<x-y<<"\n";
    } 
}
