#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;cin>>n;
    unordered_map<int,int> mp1,mp2;
    int a[n][2];
    for(int i=0;i<n;i++)
    {
        cin>>a[i][0]>>a[i][1];
        mp1[a[i][0]]++;
        mp2[a[i][1]]++;
    }
    for(int i=0;i<n;i++)
    {
        int x=(n-1);
        int y=x;
        int k=mp1[a[i][1]];
        x+=k;y-=k;
        cout<<x<<" "<<y<<"\n";
    }
    return 0;
}
