#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
const ll MOD = 998244353;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
 
        // dp[a][b] = ways where last two characters are a, b
        ll dp[2][2] = {};
 
        // Initialize first two characters
        for (int a = 0; a <= 1; a++) {
            if (s[0] != '?' && s[0] - '0' != a)
                continue;
 
            for (int b = 0; b <= 1; b++) {
                if (s[1] != '?' && s[1] - '0' != b)
                    continue;
 
                dp[a][b] = 1;
            }
        }
 
        // Add positions 2 ... n-1
        for (int i = 2; i < n; i++) {
            ll ndp[2][2] = {};
 
            for (int a = 0; a <= 1; a++) {
                for (int b = 0; b <= 1; b++) {
                    if (dp[a][b] == 0)
                        continue;
 
                    for (int c = 0; c <= 1; c++) {
                        // s[i] must match the given character
                        if (s[i] != '?' && s[i] - '0' != c)
                            continue;
 
                        // Positions i-2 and i must be different
                        if (a == c)
                            continue;
 
                        ndp[b][c] += dp[a][b];
                        ndp[b][c] %= MOD;
                    }
                }
            }
 
            memcpy(dp, ndp, sizeof(dp));
        }
 
        ll ans = 0;
 
        for (int a = 0; a <= 1; a++) {
            for (int b = 0; b <= 1; b++) {
                ans += dp[a][b];
                ans %= MOD;
            }
        }
 
        cout << ans << '
';
    }
 
    return 0;
}