// Telebe of adicto yani AzeTurk810
#include <bits/stdc++.h>
using namespace std;
using ll=int64_t;
using ull=unsigned int64_t;
# define endl '\n'
# define range(a,b,c) for(int i=a;i<b;i+=c)
# define arange(a,b,c) for(int i=a;i>b;i-=c)
# define bend(x) (x).begin(),(x).end()
# define pb push_back
# define fori(x) for(int i=0;i<x;i++)
# define forn(x,c) for(int i=0;i<n;i+=c)
# define ff first
# define ss second

//  Shoelace formula

int main()
{
//    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    vector<pair<int,int>>v(n + 1);
    fori(n)
    {
        cin>>v[i].ff>>v[i].ss;
    }
    v[n] = v[0];
    int ans = 0;
    fori(n)
    {
        // cout<<v[i].ff<<' '<<v[i].ss<<' '<<ans<<endl;
        ans+= (v[i].ff * v[i + 1].ss) - (v[i].ss * v[i + 1].ff);
    }
    double anse = abs((double) ans / 2);
    cout.precision(3);
    cout<<fixed<<anse<<endl;
}
