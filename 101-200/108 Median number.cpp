//~Binbasi~
#include<bits/stdc++.h>
using namespace std; using ll=long long; using ull=unsigned long long;
ll n;
#define endl '\n'
#define fori for(ll i=0; i<n; i++)
#define hurryupbinbasi ios_base::sync_with_stdio(false);cin.tie();cout.tie()
#define forj for(ll j=0; j<n; j++)
#define fors for(ll i=0; i<s.size(); i++)
#define forv for(ll j=0; j<v.size(); j++)
#define reversev reverse(v.begin(), v.end())
#define reverses reverse(s.begin(), s.end())
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define pr pair<int, int>
#define ff first
#define ss second
#define sorta sort(a,a+n)
#define sortv sort(v.begin(), v.end())
#define sorts sort(s.begin(), s.end())
#define mod 1000000007
#define INF 1e9+7
#define coutp1 cout.precision(2)
#define erasev v.erase(v.begin());
void print(vector<int>o)
    {
        for(int i=0;i<o.size();i++)
        {
            cout<<o[i]<<' ';
        }
    }
int main()
{
   ll a,b,c,w,e,r,t;
   cin>>a>>b>>c;
   ll q=(a+b+c)/3;
   w=abs(q-a);
   e=abs(q-b);
   r=abs(q-c);
   t=min(min(w,e),r);
   if(t==w)
   {
       cout<<a;
   }
   else if(t==e) cout<<b; else cout<<c;
}
