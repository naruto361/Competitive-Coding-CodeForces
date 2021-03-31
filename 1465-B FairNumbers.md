## [Fair Numbers](https://codeforces.com/contest/1465/problem/B)
```cpp
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
bool psqrt(ll x) 
{   
  long double sr = sqrt(x); 
  return ((sr - floor(sr)) == 0); 
}
int lcm(int a, int b)
{
    return a / __gcd(a, b) * b;
}
bool sortbysec(const pair<string,int> &a, 
              const pair<string,int> &b) 
{ if(a.second==b.second) return a.first<b.first;
    return (a.second > b.second); 
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
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
        int t;
        cin>>t;
        while(t--)
        {
            ll k;
            cin>>k;
            while(1)
            {
                ll x=k;
                int z=1;
                while(x>0)
                {
                    int r=x%10;
                    
                    if(r!=0)
                    {
                        if(k%r!=0)
                        {
                            z=0;break;
                        }
                    }
                    x/=10;
                }
                if(z==1) break;
                k++;
            }
            cout<<k;
            nl
        }
        return 0;
    }
```
