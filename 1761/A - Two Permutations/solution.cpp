#include <iostream>
using namespace std;
 
int main() {
    int test_cases;
    cin >> test_cases;
 
    while (test_cases--) {
        int n, a, b;
        cin >> n >> a >> b;
 
        if (n - a - b >= 2) {
            cout << "YES" << endl;
        } else {
            if (a == b && b == n) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
 
    return 0;
}