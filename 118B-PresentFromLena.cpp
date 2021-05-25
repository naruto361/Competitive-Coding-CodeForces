#include<bits/stdc++.h>
using namespace std;
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
bool valid(int i,int j,int n,int m,vector<vector<bool>> &vis)
{
    if(i<0 || i>=n || j<0 || j>=m || vis[i][j]==1) return 0;
    return 1;
}
void bfs(int x,int y,int n,int m,vector<vector<bool>> &vis,vector<vector<int>> &dist)
{
    queue<pair<int,int>> q;
    q.push({x,y});
    dist[x][y]=0;
    vis[x][y]=1;
    while(!q.empty())
    {
        int currx=q.front().first,curry=q.front().second;
        q.pop();
        for(int i=0;i<4;i++)
        {
            int k1=currx+dx[i] , k2=curry+dy[i];
            if(valid(k1,k2,n,m,vis))
            {
                dist[k1][k2]=1+dist[currx][curry];
                vis[k1][k2]=1;
                q.push({k1,k2});
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int srcx,srcy;
    srcx=n;srcy=n;
    int m;
    n=2*n+1;m=n;
    vector<vector<bool>> vis(n,vector<bool>(m,0));
    vector<vector<int>> dist(n,vector<int>(m));
    bfs(srcx,srcy,n,m,vis,dist);
    string s[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++) 
        {
            if(i<=srcx)
            if(j<= srcx+i){
            if(srcx-dist[i][j]>=0)
            s[i]+=(srcx-dist[i][j])+'0';
            else s[i]+=" ";
            
            if(j<srcx+i) s[i]+=" ";}
            
        }
    }
    for(int i=0;i<=srcx;i++)
    {
        cout<<s[i]<<"\n";
    }
    for(int i=srcx+1;i<n;i++)
    {
        cout<<s[n-i-1]<<"\n";
    }
}
