#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;cin>>n;
    string s;cin>>s;
    if(n==1)
    {
        if(s[0]==s[1]) cout<<"NO";
        else cout<<"YES";
        return 0;
    }
    int l=s.length()/2;
    sort(s.begin(),s.begin()+l);
    sort(s.begin()+l,s.end());
    int inc=1,dec=1;
    for(int i=0;i<l;i++)
    {
        if(s[i]<=s[i+l]) dec=0;
        if(s[i]>=s[i+l]) inc=0;
    }
    if(inc==1 || dec==1) cout<<"YES";
    else cout<<"NO";
    return 0;
}
