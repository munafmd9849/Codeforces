#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test_cases;
    cin >> test_cases;
 
    while (test_cases--) {
        int n;
        cin >> n;
 
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            arr[i] %= 2;
        }
 
        int ops = 0;
        int same = 0;
        int num = arr[0];
 
        for (int i = 0; i < n; i++) {
            if (arr[i] == num) {
                same++;
            } else {
                ops += same - 1;
                num = arr[i];
                same = 1;
            }
        }
 
        ops += same - 1;
 
        cout << ops << '
';
    }
 
    return 0;
}