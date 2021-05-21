#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int f[8]={0};
    for(int i=0;i<n;i++) f[a[i]]++;
    if(f[5]>0 || f[7]>0)
    {
        cout<<-1;return 0;
    }
    else if(f[1]>n/2 || f[2]>n/2 || f[3]>n/2 
    || f[4]>n/2 || f[5]>n/2)
    {
        cout<<-1;return 0;
    }
    else if(f[1]!=n/3) {cout<<-1;return 0;}
    int s[n/3][3];
    int j=0;
    int ff=min(f[1],min(f[2],f[4]));
    for(int i=0;i<ff;i++)
    {
        s[j][0]=1;s[j][1]=2;s[j][2]=4;
        j++;
        f[1]--;f[2]--;f[4]--;
    }
    ff=min(f[1],min(f[2],f[6]));
    for(int i=0;i<ff;i++)
    {
        s[j][0]=1;s[j][1]=2;s[j][2]=6;
        j++;
        f[1]--;f[2]--,f[6]--;
    }
    ff=min(f[1],min(f[3],f[6]));
    for(int i=0;i<ff;i++)
    {
        s[j][0]=1;s[j][1]=3;s[j][2]=6;
        j++;
        f[1]--;f[3]--;f[6]--;
    }
    for(int i=0;i<8;i++)
    {
        if(f[i]>0) {cout<<-1;return 0;}
    }
    for(int k=0;k<n/3;k++)
    {
        cout<<s[k][0]<<" "<<s[k][1]<<" "<<s[k][2]<<endl;
    }
    return 0;
}
