#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll count(string a, string b)
{
    int m = a.length();
    int n = b.length();

    ll lookup[m + 1][n + 1] = { { 0 } };
    for (int i = 0; i <= n; ++i)
        lookup[0][i] = 0;
    for (int i = 0; i <= m; ++i)
        lookup[i][0] = 1;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i - 1] == b[j - 1])
                lookup[i][j] = lookup[i - 1][j - 1] +
                               lookup[i - 1][j];
                 
            else
                lookup[i][j] = lookup[i - 1][j];
        }
    }
 
    return lookup[m][n];
}
int main()
{
   string s;cin>>s;
   string t;
   for(int i=0;i<s.length();i++)
   {
       int k=0;
       if(s[i]=='v')
       {
            while(s[i]=='v')
            {
                k++;
                i++;
                if(i==s.length()) break;
            }
            i--;
            for(int j=0;j<k-1;j++) t+='w';
        }
        else{
           t+='o';
       }
   }
   cout<<count(t,"wow");
    return 0;
}
