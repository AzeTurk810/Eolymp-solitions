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

vector<vector<pair<int,int>>> v;
vbl checked;
vector<int>childs_who_won;
vint distances;
vint chec;

void ans(bool k)
{
    if(!k)
    {
        cout << "It is not fault of sponsor..." << "\n";
    }
    else
    {
        cout << "The good sponsor!\n";
    }
}
int koml = 150;
void bfs(int start)
{
    distances[start] = 0;
    queue<int>q;
    q.push(start);
    while(!q.empty())
    {
        int from = q.front();
        int y = v[from].size();
        q.pop();
        fori(y)
        {
            if(/*distances[v[from][i].ff] == -1*/distances[v[from][i].ff] >= distances[from] + v[from][i].ss && chec[v[from][i].ff] <= koml)
            {
                distances[v[from][i].ff] = distances[from] + v[from][i].ss;
                chec[v[from][i].ff] ++;
                q.push(v[from][i].ff);
            }
        }
    }
}

signed main()
{
    int n , m , k;
    cin >> n >> m >> k;
    checked.resize(n,0);
    childs_who_won.resize(m);
    chec.resize(n , 0);
    distances.resize(n,INFll);
    fori(m){cin >> childs_who_won[i];childs_who_won[i]--;}
    v.resize(n);
    int a , b , t;
    fori(k)
    {
        cin >> a >> b >> t;
        a--;b--;
        v[a].pb({b,t});
        v[b].pb({a,t});
    }
    int s;
    cin >> s;
    int maximum_dist = -INFll;
    
    bfs(--s);
    forj(m)
    {
        if(distances[childs_who_won[j]] != INFll)maximum_dist = max(distances[childs_who_won[j]],maximum_dist);else{
            ans(0);
            return 0;
        }
    }
    ans(1);
    cout << maximum_dist << endl;
}
