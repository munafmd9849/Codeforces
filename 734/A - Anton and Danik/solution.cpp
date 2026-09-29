#include <iostream>
using namespace std;
 
int main() {
    int n, x = 0, y = 0;
    cin >> n;
 
    string s;
    cin >> s;
 
    for (char ch : s) {
        if (ch == 'A')
            x++;
        else
            y++;
    }
 
    if (x > y)
        cout << "Anton";
    else if (y > x)
        cout << "Danik";
    else
        cout << "Friendship";
 
    return 0;
}