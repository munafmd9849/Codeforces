#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
    int n;
    cin >> n;
 
    string s;
    cin >> s;
 
    int ans = 0, start = 0;
 
    while (start < n && s[start] == '0')
        start++;
 
    if (start == n) {
        cout << (n + 2) / 3 << "
";
        return;
    }
 
    ans += (start + 1) / 3;
 
    int end = n - 1;
    while (end > start && s[end] == '0')
        end--;
 
    int end_zeroes = n - 1 - end;
    ans += (end_zeroes + 1) / 3;
 
    for (int i = start; i <= end;) {
        if (s[i] == '1') {
            i++;
            continue;
        }
 
        int j = i;
        while (j <= end && s[j] == '0')
            j++;
 
        ans += (j - i) / 3;
        i = j;
    }
 
    int c = 0;
    for (int i = 0; i < n; i++)
        if (s[i] == '1')
            c++;
 
    cout << ans + c << "
";
}
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--)
        solve();
 
    return 0;
}