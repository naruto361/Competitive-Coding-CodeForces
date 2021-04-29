
#include <bits/stdc++.h>
using namespace std;
#define yes cout<<"yes\n";
#define no cout<<"no\n";
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define ll long long int
#define pb push_back
#define mod 1000000007
#define nl cout<<"\n";
#define loop1(m) for(int i=0;i<m;i++) 
#define loop2(n,m) for(auto i=n;i<=m;i++)
#define count1s(n) __builtin_popcount(n)
long long power(int n,int p)
{
    if(p==0) return 1;
    if(p%2==0)
    {
        long long ret = power(n,p/2);
        return ((ret%mod)*(ret%mod))%mod;
    }
    else return ((n%mod)*(power(n,p-1)%mod))%mod;
}
bool psqrt(ll x) 
{   
  long double sr = sqrt(x); 
  return ((sr - floor(sr)) == 0); 
}
int lcm(int a, int b)
{
    return a / __gcd(a, b) * b;
}
bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
}
bool isprime(ll n) 
{ 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
    if (n%2 == 0 || n%3 == 0) return false; 
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
    return true; 
}
int countdigits(ll n)
{
	return floor(log10(n)+1);
}
ll inverse(ll i){
    if(i==1) return 1;
    return (mod - ((mod/i)*inverse(mod%i))%mod+mod)%mod;
}
int binomialCoeff(int n, int k) 
{ 
    int res = 1; 
    if (k > n - k) 
    k = n - k; 
    for (int i = 0; i < k; ++i) 
    { 
        res *= (n - i); 
        res /= (i + 1); 
    } 
      
    return res; 
} 

//************** CODE ***************

void solve()
{
    int t;cin>>t;
    while(t--)
    {
        ll x,y,z;
        cin>>x>>y>>z;
        if(x==0 || y==0)
        {
            NO
        }
        else if(z==0)
        {
            if(x==y) YES
            else NO
        }
        else
        {
            if(x>y) swap(x,y);
            if(x*(z+1) >=y) YES
            else NO
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    solve();
    return 0;
}
