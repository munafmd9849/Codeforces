#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> p(n);
 
        for (int &x : p) cin >> x;
 
        vector<int> idx;
 
        // Positions that must be selected
        for (int i = 0; i < n; i++) {
            if (p[i] != i + 1) {
                idx.push_back(i);
            }
        }
 
        // Exactly one operation is required.
        // Choosing one index is always valid for an already sorted permutation.
        if (idx.empty()) {
            cout << "YES
";
            continue;
        }
 
        // Reverse the values at all mismatched positions.
        vector<int> q = p;
 
        int l = 0, r = (int)idx.size() - 1;
 
        while (l <= r) {
            q[idx[l]] = p[idx[r]];
            q[idx[r]] = p[idx[l]];
            l++;
            r--;
        }
 
        bool ok = true;
 
        for (int i = 0; i < n; i++) {
            if (q[i] != i + 1) {
                ok = false;
                break;
            }
        }
 
        cout << (ok ? "YES
" : "NO
");
    }
 
    return 0;
}