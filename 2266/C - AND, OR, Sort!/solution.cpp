#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
 
        if (s[0] == '1') {
            cout << count(s.begin(), s.end(), '0') << '
';
            continue;
        }
 
        
 
        int ones = 0;
        int zeros = count(s.begin(), s.end(), '0');
 
        int ans = zeros;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1')
                ones++;
            else
                zeros--;
 
            
            ans = min(ans, ones + zeros);
        }
 
        cout << ans << '
';
    }
}