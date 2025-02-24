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

int ebob(int a,int b)

{

    return __gcd(a,b);

}

int ekob(int a,int b)

{

    return a*b/ebob(a,b);

}

int main()

{

    ll a,b,c,d;

    cin>>a>>b>>c>>d;

    int suret=1;

    int mexrec=a;

    mexrec=ekob(a,b);

    suret=(mexrec/a+mexrec/b);

    int mexrec2=mexrec;

    int suret2=suret;//cout<<suret<<'/'<<mexrec<<' ';

    mexrec=ekob(mexrec,c);

    suret=mexrec/mexrec2*suret2+mexrec/c;

    //cout<<suret<<'/'<<mexrec;

    int cnt=mexrec-suret;

    if(d%cnt!=0)    

    cout<<-1;

    else

    cout<<d/cnt*mexrec;

}
