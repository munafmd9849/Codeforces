#include <bits/stdc++.h>
using namespace std;
 
#define int int64_t
 
void solve() {
    int a, b;
    cin >> a >> b;
 
    int ans = 0;
    while (a <= b) {
        a *= 3;
        b *= 2;
        ans++;
    }
 
    cout << ans << '
';
}
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    solve();
    return 0;
}