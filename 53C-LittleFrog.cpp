#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int num=1;
    cout<<1<<" ";
    int c=1;
    int diff=n-1;
    int ans=1;
    while(num<n)
    {
        if(c==1) {ans+=diff;c=-1;}
        else if(c==-1) {ans-=diff,c=1;}
        cout<<ans<<" ";
        diff--;
        num++;
    }
    
}
