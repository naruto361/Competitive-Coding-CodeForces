#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        int a=0,b=0;
        int x[n]={0};
        int y[n]={0};
        bool check=1;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='T') a++;
            else b++;
            x[i]=a;
            y[i]=b;
            if(b>a) check=0;
            
        }
        if(b!=n/3 || s[0]=='M' || check==0 || s[n-1]=='M') cout<<"NO\n";
        else
        {
            int ok=1;
            for(int i=1;i<n-1;i++)
            {
                if(s[i]=='M')
                {
                    if(!(x[i]>=y[i] && (x[n-1]-x[i])>=(y[n-1]-y[i-1])))
                    ok=0;
                }
            }
            if(ok)
            cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
}
