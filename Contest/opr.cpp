#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int result = 0;
        bool hasZero = false;

        for (int i = n - 1; i >= 0; --i) {
            if (s[i] == '0') {
                hasZero = true;
                break;
            }
            result += s[i] - '0';
        }

        if (hasZero) {
            cout << 0 << '\n';
        } else {
            cout << result << '\n';
        }
    }
    return 0;
}
