#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];
    int b[n+1];
    int change=0;
    int mini=n+1,maxi=-1;
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[i+1])
        {
            change++;
            while(a[i]>a[i+1])
            {
                mini=min(mini,i);
                maxi=max(maxi,i+1);
                i++;
                if(i>=n) break;
            }
        }
        if(change==1) break;
    }
    reverse(a+mini,a+maxi+1);
    bool check=1;
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[i+1])
        {
            check=0;
            break;
        }
    }
    if(check==0) cout<<"no";
    else
    {
        cout<<"yes\n";
        if(change==0) cout<<1<<" "<<1;
        else cout<<mini<<" "<<maxi;
    }
}
