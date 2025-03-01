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
bool ikiquv(int n)
{
    while(n>1)
    {
        if(n%2!=0)
        return 0;
        n/=2;
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    if(n<=2)
    {cout<<0;return 0;}
    if(ikiquv(n))
    {
        cout<<0;
        return 0;
    }
    for(ll i=1;i<99999999;i*=2)
    {
        if(i>n)
        {
            i/=2;
            cout<<n-i;
            return 0;
        }
    }
}
