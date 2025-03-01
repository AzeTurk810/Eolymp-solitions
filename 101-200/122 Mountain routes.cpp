// Telebe of adicto yani AzeTurk810
/*
    Author:             AzeTurk810
    Licance:            open source(only authors name must be in code)

*/
/*
    Ascii art


    ▄▄▄        ██████  ▄████▄   ██▓ ██▓ ▄▄▄       ██▀███  ▄▄▄█████▓
    ▒████▄    ▒██    ▒ ▒██▀ ▀█  ▓██▒▓██▒▒████▄    ▓██ ▒ ██▒▓  ██▒ ▓▒
    ▒██  ▀█▄  ░ ▓██▄   ▒▓█    ▄ ▒██▒▒██▒▒██  ▀█▄  ▓██ ░▄█ ▒▒ ▓██░ ▒░
    ░██▄▄▄▄██   ▒   ██▒▒▓▓▄ ▄██▒░██░░██░░██▄▄▄▄██ ▒██▀▀█▄  ░ ▓██▓ ░
    ▓█   ▓██▒▒██████▒▒▒ ▓███▀ ░░██░░██░ ▓█   ▓██▒░██▓ ▒██▒  ▒██▒ ░
    ▒▒   ▓▒█░▒ ▒▓▒ ▒ ░░ ░▒ ▒  ░░▓  ░▓   ▒▒   ▓▒█░░ ▒▓ ░▒▓░  ▒ ░░
    ▒   ▒▒ ░░ ░▒  ░ ░  ░  ▒    ▒ ░ ▒ ░  ▒   ▒▒ ░  ░▒ ░ ▒░    ░
    ░   ▒   ░  ░  ░  ░         ▒ ░ ▒ ░  ░   ▒     ░░   ░   ░
        ░  ░      ░  ░ ░       ░   ░        ░  ░   ░
                    ░
    ________  ________  _______  _________  ___  ___  ________  ___  __    ________    _____  ________
    |\   __  \|\_____  \|\  ___ \|\___   ___\\  \|\  \|\   __  \|\  \|\  \ |\   __  \  / __  \|\   __  \
    \ \  \|\  \\|___/  /\ \   __/\|___ \  \_\ \  \\\  \ \  \|\  \ \  \/  /|\ \  \|\  \|\/_|\  \ \  \|\  \
    \ \   __  \   /  / /\ \  \_|/__  \ \  \ \ \  \\\  \ \   _  _\ \   ___  \ \   __  \|/ \ \  \ \  \\\  \
    \ \  \ \  \ /  /_/__\ \  \_|\ \  \ \  \ \ \  \\\  \ \  \\  \\ \  \\ \  \ \  \|\  \   \ \  \ \  \\\  \
    \ \__\ \__\\________\ \_______\  \ \__\ \ \_______\ \__\\ _\\ \__\\ \__\ \_______\   \ \__\ \_______\
        \|__|\|__|\|_______|\|_______|   \|__|  \|_______|\|__|\|__|\|__| \|__|\|_______|    \|__|\|_______|
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>
#include <map>
#include <bitset>
#include <queue>
// #include <bits/stdc++.h>

using namespace std;
using ll= long long;
using ull=unsigned long long;

# define vint vector<int>
# define vull vector<unsigned long long>
# define sint set<int>
# define vpri vector<pair<int,int>>
# define vll vector<long long>
# define vbl vector<bool>
# define vvint vector<vector<int>>
# define vvll vector<vector<long long>>

/* Other defines*/
# define qint queue<int>

//# define endl '\n'
# define range(a,b,c) for(int i=a;i<b;i+=c)
# define ranger(a,b,c) for(int r=a;r<b;r+=c)
# define arange(a,b,c) for(int i=a;i>b;i-=c)
# define bend(x) (x).begin(),(x).end()
# define pb push_back
# define sortv(v) sort((v).begin() , (v).end());
# define fori(x) for(int i=0;i<x;i++)
# define forj(y) for(int j=0;j<y;j++)
# define forn(x,c) for(int i=0;i<n;i+=c)
# define ff first
# define ss second
# define INFi 1e9
# define INFll 1e18
# define printfprs(v) for(int alma = 0;alma<(v).size();alma++){cout<<(v)[alma].ff<< ' '<<(v)[alma].ss<<endl;};
# define printfv(v) {for(int alol = 0 ; alol < (v).size() ; alol++){cout<<(v)[alol]<<' ';}cout << endl;}
# define int long long

int n , k , a , b, d , l ,r;

vvint v;
vbl checked;

int dfs(int t,int dist)
{
    // cout << t << ' ' ;
    int res = 0;
    if(t == b)return 1;
    if(dist >= d)
    return 0;
    int y = v[t].size();
    fori(y)
    {
        if(!checked[v[t][i]])
        {
            checked[v[t][i]] = true;
            res += dfs(v[t][i] , dist + 1);
            checked[v[t][i]] = false;
        }
    }
    return res;
}

signed main()
{
    cin >> n >> k >> a >> b >>d;
    v.resize(n);
    checked.resize(n , false);
    fori(k)
    {
        cin >> l >> r;
        l--;r--;
        v[l].pb(r);
    }
    a--;b--;
    checked[a] = 1;
    cout << dfs(a,0) << endl;
    
}
