#include<bits/stdc++.h>
using namespace std;
#define block 1000
// use array instead of map in this questionn to avoid TLE
bool sortbyl(pair<int,pair<int,int>> &a,pair<int,pair<int,int>> &b)
{
    if(a.second.first/block == b.second.first/block) return a.second.second<b.second.second;
    return a.second.first/block < b.second.first/block;
}
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    int n;cin>>n;
    int t;cin>>t;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    
    int count=0;
    unordered_map<int,int> f;
    vector<int> ans(t);
    vector<pair<int,pair<int,int>>> q;
    for(int i=0;i<t;i++)
    {
        int l,r;cin>>l;r=n;
        l--;r--;// for 1 base index
        q.push_back(make_pair(i,make_pair(l,r)));
    }
    sort(q.begin(),q.end(),sortbyl);
    /*for(int i=0;i<q.size();i++)
    {
        cout<<q[i].first<<" "<<q[i].second.first<<" "<<q[i].second.second<<endl;
    }*/
    int start=q[0].second.first , end=q[0].second.second;
    for(int i=start;i<=end;i++)
    {
        f[a[i]]++;if(f[a[i]]==1) count++;
    }
    ans[q[0].first]=count;
    //cout<<"count "<<count<<" start "<<start+1<<" end "<<end+1<<endl;
    //for(auto j=f.begin();j!=f.end();j++) cout<<j->first<<"->"<<j->second<<"\n";
    for(int i=1;i<t;i++)
    {
        while(start<q[i].second.first)
        {
            
            f[a[start]]--;
            if(f[a[start]]==0) count--;
            start++;
        }
        while(start>q[i].second.first)
        {
            start--;
            f[a[start]]++;
            if(f[a[start]]==1) count++;
            
        }
        while(end>q[i].second.second)
        {
            f[a[end]]--;
            if(f[a[end]]==0) count--;
            end--;
            
        }
        while(end<q[i].second.second)
        {
            end++;
            f[a[end]]++;
            if(f[a[end]]==1) count++;
            
        }
        ans[q[i].first]=count;
        //cout<<"count "<<count<<" start "<<start+1<<" end "<<end+1<<endl;
        //for(auto j=f.begin();j!=f.end();j++) cout<<j->first<<"->"<<j->second<<"\n";
    }
    for(int i=0;i<t;i++) cout<<ans[i]<<"\n";
}
