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
//# define mp make_pair
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
map<ll,ll>mp;
void quvvet(int n,map<ll,ll>&mp)
{
    
    if(n>1)
    {
        for(int i=2;i<=n;i++)
        {
            if(n%i==0)
            {if(mp[i]==0)mp[i]=1;else mp[i]++;quvvet(n,mp);break;}
        }
    }
}
std::vector<bool>v(10000,0) ;
ll ters(ll i)
{
    int j=0;
    while(i>0)
    {
        j=j*10+i%10;
        i/=10;
    }
    return j;
}
int main()
{
    v[1]=1;
    int ans=0;
    ll a,b;
    cin>>a;cin>>b;
    for(int i=2;i<10000;i++)
    {
        if(v[i]==0)
        {for(int j=i*2;j<10000;j+=i){v[j]=1;}}
    }
    
    for(int i=a;i<=b;i++)
    if(!v[i] && !v[ters(i)])ans++;
    cout<<ans;
}
