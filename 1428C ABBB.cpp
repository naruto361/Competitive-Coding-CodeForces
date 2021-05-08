#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        int i=0;
        while(1)
        {
            if(i==s.length()-1) break;
            if((s[i]=='B' || s[i]=='A') && s[i+1]=='B')
            {
                s.erase(i,2);
                if(i>0) i--;
            }
            else
            i++;
            if(s.length()==0) break;
        }
        
        cout<<s.length()<<endl;
    }
}
