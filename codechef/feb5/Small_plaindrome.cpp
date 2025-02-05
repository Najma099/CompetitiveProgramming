#include <bits/stdc++.h>
using namespace std;

long long generateNumber(int x, int y) {
    string s = "";

    for (int i = 0; i < x / 2; i++) {
        s += to_string(1);
    }
    for (int i = 0; i < y; i++) {
        s += to_string(2);
    }
    for (int i = 0; i < x / 2; i++) {
        s += to_string(1);
    }

    return stoll(s);  
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        cout << generateNumber(x, y) << endl;
    }
    return 0;
}