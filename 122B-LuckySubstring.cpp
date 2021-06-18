#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    string s;cin>>s;
    int a=0,b=0;
    for(char &c:s)
    {
        if(c=='4') a++;
        else if(c=='7') b++;
    }
    if(a==0 && b==0) cout<<-1;
    else if(a>=b) cout<<4;
    else if(b>a) cout<<7;
    else cout<<-1;
    return 0;
}
