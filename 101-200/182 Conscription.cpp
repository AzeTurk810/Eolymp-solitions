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
/*bool ikiquv(int n)
{
    while(n>1)
    {
        if(n%2!=0)
        return 0;
        n/=2;
    }
    return 1;
}*/
int main()
{
    int n,h,g,ans=0,x,y;
    std::vector<pair<int,pair<int,int>>> v;
    cin>>n>>h>>g;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        v.pb({x-y,{x,y}});
    }
    sortv;
    int i=n-1;
    if(h+g>n)
    {
        cout<<-1;
        return 0;
    }
    while(h>0)
    {
        ans+=v[i].ss.ff;
        i--;
        h--;
    }
    while(i>=g)
    {
        ans+=max(v[i].ss.ff,v[i].ss.ss);
        i--;
    }
    while(g>0)
    {
        ans+=v[i].ss.ss;
        i--;
        g--;
    }
    cout<<ans;
}
