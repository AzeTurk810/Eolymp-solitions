//~Binbasi~
#include<bits/stdc++.h>
using namespace std; using ll=long long; using ull=unsigned long long;
#define endl '\n'
#define fori for(ll i=0; i<n; i++)
#define forj for(ll j=0; j<n; j++)
#define fors for(ll i=0; i<s.size(); i++)
#define forv for(ll j=0; j<v.size(); j++)
#define reversev reverse(v.begin(), v.end())
#define reverses reverse(s.begin(), s.end())
#define mp make_pair
#define pb push_back
#define sorta sort(a,a+n)
#define sortv sort(v.begin(), v.end())
#define sorts sort(s.begin(), s.end())
#define coutp1 cout.precision(2)
#define erasev v.erase(v.begin());
#define elif else if
int main()
{
    ll n,a,b,c;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        ll q[b];
        c=0;
        for(int i=0;i<b;i++)
        {
            cin>>q[i];
        }
        sort(q,q+b);
        
        
        // a b den cox olsa
        if(a>b)
        {
            for(int i=0;i<b;i++)
            {
                c+=q[i];
            }
            cout<<c<<"\n";
        }
        else
        {
            reverse(q,q+b);
            for(int i=0;i<a;i++)
            {
                c+=q[i];
            }
            cout<<c<<"\n";
        }
    }
}
