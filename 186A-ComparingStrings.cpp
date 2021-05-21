#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;cin>>a>>b;
    if(a.length()!=b.length())
    {
        cout<<"NO";return 0;
    }
    int f1[26]={0};
    int f2[26]={0};
    for(int i=0;i<a.length();i++)
    {
        f1[a[i]-'a']++;
        f2[b[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(f1[i]!=f2[i])
        {
            cout<<"NO";return 0;
        }
    }
    int s=0;
    for(int i=0;i<a.length();i++)
    {
        if(a[i]!=b[i]) s++;
    }
    if(s==2)
    {
        cout<<"YES";return 0;
    }
    else if(s==1)
    {
        cout<<"NO";return 0;
    }
    if(a==b)
    {
        int f[26]={0};
        for(int i=0;i<a.length();i++)
        {
            f[a[i]-'a']++;
        }
        int two=0;
        for(int i=0;i<26;i++)
        {
            if(f[i]>1) two++;
        }
        if(two>0)
        {
            cout<<"YES";
           
        }
        else cout<<"NO";
        return 0;
    }
    cout<<"NO";

    return 0;
}
