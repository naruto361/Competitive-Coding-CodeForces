#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;cin>>n;
    int l=n.length();
    string t;
    long long ans=0;
    for(int i=0;i<l;i++) t+='1';
    if(n>=t)
    {
        for(int i=0;i<l;i++) ans+=pow(2,i);
        cout<<ans;
        return 0;
    }
    int one=0;
    int p=l-1;
    for(int i=0;i<l;i++)
    {
        int r=(n[i]-'0')%10;
        if(one==1)
        {
            ans+=pow(2,p);
        }
        if(one==0)
        {
            if(r>1) one=1;
            if(r>=1) ans+=pow(2,p);
        }
        p--;
    }
    cout<<ans;
}
