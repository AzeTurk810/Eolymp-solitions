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
# define MAX 1e6+1
# define enterv while(cin>>i)v.pb(i);
# define print(v) for(ll i = 0; i < v.size(); i++)cout<<v[i]<<" "
vector<bool> is_prime(int(MAX+5),1);
void hirsima()
{is_prime[0]=0;is_prime[1]=0;
    for(ll i=2;i*i<=MAX;i++)
    {
        if(is_prime[i])
        {
            for(int j=i*2;j<MAX;j+=i)
            {
                is_prime[j]=0;
            }
        }
    }
}
int main()
{
    ull n,two=0,five=0;
    cin>>n;
    for (ull i = 5; i <= n; i += 5) {
        ull current = i;
        while (current % 5 == 0) {
            five++;
            current /= 5;
        }
    }
    cout<<five;
}
