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
# define print(v) for(ll i = 0; i < v.size(); i++)cout<<v[i]<<" "
bool comp(pair<string,string> &a,pair<string,string> &b)
{
    return (a.second<b.second);
}
int main()
{
    int n;
    cin>>n;
    string a,b;
    std::vector<pair<string,string>> v;
    string end="";
    ll ans=0;
    fori
    {
        cin>>a>>b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end(),comp);
    fori
    {
        if(v[i].first>=end)
        {
            ans++;
            end=v[i].second;
        }
    }
    cout<<ans;
}
