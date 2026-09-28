#include <bits/stdc++.h>
using namespace std;
 
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> a(n);
 
    for (int &x : a)
        cin >> x;
 
    int l = 0, r = n - 1;
 
    while (l < n && a[l] == 0)
        l++;
 
    while (r >= 0 && a[r] == 0)
        r--;
 
    if (l < n)
        a[l] = 1;
 
    if (r >= 0)
        a[r] = 1;
 
    for (int &x : a) {
        if (x == -1)
            x = 0;
        cout << x << ' ';
    }
 
    cout << '
';
}
 
signed main() {
    fast;
 
    int t;
    cin >> t;
 
    while (t--)
        solve();
 
    return 0;
}