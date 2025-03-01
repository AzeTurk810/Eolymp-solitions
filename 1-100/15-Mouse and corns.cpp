#include <bits/stdc++.h>
using namespace std;
long long dp[107][107];
int main() {
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    dp[i][0]=-9;
    for(int i=0;i<m;i++)
    dp[n+1][i]=-9;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>dp[i][j];
        }
    }
    for(int i=n;i>=0;i--)
    {
        for(int j=1;j<=m;j++)
        {
            if(i!=n || j!=1)
            dp[i][j]+=max(dp[i+1][j],dp[i][j-1]);
        }
    }
    string ans;
    int i=1,j=m;
    while(i<n || j>1)
    {
        
        if(dp[i+1][j]>dp[i][j-1])
        {
            ans = ans + "F";
            i++;
        }
        else if(dp[i+1][j]<dp[i][j-1])
        {
            j--;
            ans = ans + "R";
        }
        else
        {
            if(j>1)
            {
                j--;
                ans = ans + "R";
            }
            else
            {
                ans = ans + "F";
                i++;
            }
        }
    }
    reverse(ans.begin(),ans.end());
    cout<<ans;

}
