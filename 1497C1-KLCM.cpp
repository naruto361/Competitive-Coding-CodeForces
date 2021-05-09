#include<bits/stdc++.h>
using namespace std;
void solve(int n)
{
    if(n%3==0) {cout<<n/3 <<" "<<n/3<<" "<<n/3;}
    else if(n%4==0) {cout<<n/2<<" "<<n/4<<" "<<n/4;}
    else if(n%3==1 && (n-1)%2==0) cout<<1<<" "<<n/2<<" "<<n/2;
    else if(n%3==2 && n&1) cout<<n/2<<" "<<n/2<<" "<<1;
    else if(n%2==0) cout<<2<<" "<<n/2-1 <<" "<<n/2-1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        solve(n);
        cout<<endl;
    } 
}
