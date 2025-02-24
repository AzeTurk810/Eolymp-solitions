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
// #include <bits/stdc++.h>

using namespace std;
using ll= long long;
using ull=unsigned long long;

# define vint vector<int>

//# define endl '\n'
# define range(a,b,c) for(int i=a;i<b;i+=c)
# define arange(a,b,c) for(int i=a;i>b;i-=c)
# define bend(x) (x).begin(),(x).end()
# define pb push_back
# define fori(x) for(int i=0;i<x;i++)
# define forj(y) for(int j=0;j<y;j++)
# define forn(x,c) for(int i=0;i<n;i+=c)
# define ff first
# define ss second
# define INFi 1e9
# define INFll 1e18
# define printfprs(v) for(int alma = 0;alma<(v).size();alma++){cout<<(v)[alma].ff<< ' '<<(v)[alma].ss<<endl;};
// # define int long long

const int LIMIT = 2e5 + 7;

template<std::size_t SIZE>
int bitSetToInt(std::bitset<SIZE> bitSet) {
    if (!bitSet[SIZE - 1]) return bitSet.to_ulong();
    bitSet.flip();
    return -(bitSet.to_ulong() + 1);
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n , ans = 0;
    cin >> n ;
    int bitCount = log2(n) + 1;
    bitset<32>st(n);
    for(int i = 0; i < bitCount ; i++)
    {
        
        bool k  = st[bitCount - 1];
        ll cur = st.to_ullong();
        ans = max(cur, ans);
        for(int i = bitCount - 1; i > 0  ; i--)
        {st[i] = st[i - 1 ] ;}
        st[0] = k;
    }
    cout << ans << endl;
}
