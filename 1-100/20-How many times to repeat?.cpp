#include <bits/stdc++.h>
using namespace std;

int sum_dig(int n)
{
    int res = 0;
    while(n > 0)
    {
        res += n%10;n/=10;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n , ans = 0;
    cin >> n;
    while(n > 0)
    {
        n -= sum_dig(n);ans++;
    }
    cout << ans << "\n";
}
