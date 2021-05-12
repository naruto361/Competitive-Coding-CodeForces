#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;cin>>n;
    string s;cin>>s;
    vector<int> v;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
            if(i*i!=n) v.push_back(n/i);
        }
    } 
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        reverse(s.begin(),s.begin()+v[i]);
        //reverse(s.begin()+v[i]-1,s.end());
        
    }
    cout<<s;
    return 0;
}
