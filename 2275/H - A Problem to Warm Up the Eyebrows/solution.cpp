#include <bits/stdc++.h>
using namespace std;
 
const long long MOD = 1000000007;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, m;
        cin >> n >> m;
 
        vector<vector<long long>> a(n, vector<long long>(m));
        vector<vector<long long>> b(n, vector<long long>(m, 0));
        vector<vector<long long>> c(n, vector<long long>(m, 0));
 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
                a[i][j] = (a[i][j] % MOD + MOD) % MOD;
            }
        }
 
        for (int j = 0; j < m; j++) {
            if (n % 2 == 1) {
                long long sum = 0;
 
                for (int i = 0; i < n; i += 2)
                    sum = (sum + a[i][j]) % MOD;
 
                for (int i = 0; i < n; i++) {
                    if (i % 2 == 0)
                        b[i][j] = (MOD - sum) % MOD;
                }
            } else {
                long long sum = 0;
 
                for (int i = n - 1; i >= 0; i--) {
                    if (i % 2 == 0)
                        b[i][j] = sum;
                    else
                        sum = (sum + a[i][j]) % MOD;
                }
 
                sum = 0;
 
                for (int i = 0; i < n; i++) {
                    if (i % 2 == 1)
                        b[i][j] = sum;
                    else
                        sum = (sum + a[i][j]) % MOD;
                }
            }
        }
 
        for (int i = 0; i < n; i++) {
            if (m % 2 == 1) {
                long long sum = 0;
 
                for (int j = 0; j < m; j += 2)
                    sum = (sum + b[i][j]) % MOD;
 
                for (int j = 0; j < m; j++) {
                    if (j % 2 == 0)
                        c[i][j] = (MOD - sum) % MOD;
                }
            } else {
                long long sum = 0;
 
                for (int j = m - 1; j >= 0; j--) {
                    if (j % 2 == 0)
                        c[i][j] = sum;
                    else
                        sum = (sum + b[i][j]) % MOD;
                }
 
                sum = 0;
 
                for (int j = 0; j < m; j++) {
                    if (j % 2 == 1)
                        c[i][j] = sum;
                    else
                        sum = (sum + b[i][j]) % MOD;
                }
            }
        }
 
        long long ans = 0;
 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                ans = (ans + a[i][j] * c[i][j]) % MOD;
            }
        }
 
        cout << ans << '
';
    }
 
    return 0;
}