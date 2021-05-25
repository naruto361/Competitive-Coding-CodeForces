#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;cin>>s;
    if(s[0]!='1') {cout<<"NO";return 0;}
    if(s.length()==1)
    {
        if(s[0]=='1') {cout<<"YES";return 0;}
    }
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='1' && s[i]!='4')
        {
            cout<<"NO";
            return 0;
        }
    }
    int i=s.length()-1;
    
    while(1){
        int check=0;
        while(s.length()>=3 && s[i]=='4' && s[i-1]=='4' && s[i-2]=='1')
        {
            s.erase(i-2,3);check=1;
            i=s.length()-1;
        }
        while(s.length()>=2 && s[i]=='4' && s[i-1]=='1')
        {
            s.erase(i-1,2);check=1;
            i=s.length()-1;
        }
        while(s.length()>=1 && s[i]=='1')
        {
            s.erase(i,1);check=1;
            i=s.length()-1;
        }
        if(check==0) break;
    }
        if(s.length()==0)
        cout<<"YES";
        else cout<<"NO";
    return 0;
}
