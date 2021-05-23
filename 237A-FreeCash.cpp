#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<pair<int,int>,int> mp;
    int t;cin>>t;
    int maxi=1;
    while(t--)
    {
        int x,y;cin>>x>>y;
        mp[{x,y}]++;
        maxi=max(maxi,mp[{x,y}]);
    }
    cout<<maxi<<endl;
}
