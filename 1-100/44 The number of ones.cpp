//Desinged by AzeTurk810
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int dp[n+1];

    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i <= n; i++) {
        dp[i] = i;
        for (int j = 1; j < i; j++) {
            dp[i] = min(dp[i], dp[j] + dp[i-j] );
            if (i%j == 0) {
                dp[i] = min(dp[i], dp[j] + dp[i/j]);
            }
        }
    }
   cout << dp[n];

    return 0;
}
