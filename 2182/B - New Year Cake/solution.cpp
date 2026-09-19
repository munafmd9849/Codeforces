#include <bits/stdc++.h>
using namespace std;
 
int solve(int a,int b,bool startWhite) {
    int layers = 0;
    int size = 1;
    bool isWhite = startWhite;
 
    while (true) {
        if (isWhite) {
            if (a < size) break;
            a -= size;
        } else {
            if (b < size) break;
            b -= size;
        }
        layers++;
        size *= 2;
        isWhite = !isWhite;
    }
 
    return layers;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
 
        int ans = max(solve(a, b, true), solve(a, b, false));
        cout << ans << '
';
    }
}