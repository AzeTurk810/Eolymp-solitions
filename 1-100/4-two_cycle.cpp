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



int main()
{
//    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    double x1,x2,y1,y2,r1,r2;
    cin>>x1>>y1>>r1>>x2>>y2>>r2;
    double distence = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
    distence = sqrt(distence);
    if(x1 == x2 && y1 == y2  && r1 == r2)
        cout<<-1;
    else if(distence == r1 + r2 || distence == abs(r1 - r2))
        cout<<1;
    else if(distence < abs(r1 - r2  ) || (r1 + r2) < distence)
     cout<<0;
    else // if()
        cout<<2;

}
