#include <bits/stdc++.h>
using namespace std;
int dp[35];
int main() {
    int n;
    cin>>n;
    dp[0]=0;
    dp[1]=2;
    dp[2]=4;
    dp[3]=6;
    for(int i=4;i<32;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    cout<<dp[n];
}
