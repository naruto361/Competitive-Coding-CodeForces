#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
   int t;cin>>t;
   while(t--)
   {
       int n;cin>>n;
       int a[n];
       for(int i=0;i<n;i++) cin>>a[i];
       int m;cin>>m;
       int b[m];
       for(int i=0;i<m;i++) cin>>b[i];
       int s1=0,s2=0;
       int max1=0,max2=0;
       for(int i=0;i<n;i++)
       {
           s1+=a[i];
           max1=max(max1,s1);
       }
       for(int i=0;i<m;i++)
       {
           s2+=b[i];
           max2=max(max2,s2);
       }
       cout<<max1+max2<<"\n";
   }
    return 0;
}
