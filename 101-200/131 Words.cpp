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
# define INF 1e9+7
# define enterv while(cin>>i)v.pb(i);
# define print(v) for(ll i = 0; i < v.size(); i++)cout<<v[i]<<" ";
const int MAXN = (int)(1e6 + 7);
int main()
{
    string s,sc;
    bool d=1;
    ll n,ans=0;
    cin>>s;
    cin>>n;
    map<char,int>mp;
    for(auto h:s)
        mp[h]++;
    while(n--)
    {
        d=1;
        map<char,int>mpc;
        cin>>sc;
        for(auto h:sc)
        {
            mpc[h]++;
            if(mp[h]<mpc[h])
            {
                d=0;
                break;
            }
        }
        if(d)
            ans++;

    }
    cout<<ans;
}
