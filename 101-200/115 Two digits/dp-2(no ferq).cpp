//Desinged by AzeTurk810
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using ull=unsigned long long;
# define hurryup ios_base::sync_with_stdio(false);cin.tie();cout.tie()
# define endl '\n'
# define fori for(ll i=0; i<n; i++)
# define forj for(ll j=0; j<m; j++)
# define fors for(ll i=0; i<s.size(); i++)
# define forv for(ll i=0; i<v.size(); i++)
# define mp make_pair
# define pb push_back
# define eb emplace_back
# define ff first
# define ss second
# define sorta sort(a,a+n)
# define sortv sort(v.begin(), v.end())
# define sorts sort(s.begin(), s.end())
# define mod 1000000007
# define INF 99999999
const int MAXN = (int)(1e6 + 7);
int main()
{
    int n;
    cin >> n;

    vector<int> dp(max(3, n + 1));
    dp[0]=0;
    dp[1]=2;
    dp[2]=4;
    for(int i = 3; i <= n; i++)
        dp[i] = dp[i - 1] + dp[i - 2];
    cout << dp[n];
}
