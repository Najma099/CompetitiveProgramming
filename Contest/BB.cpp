#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int solve() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (n == 1) {
            cout << s << '\n';
            continue;
        }

        map<char, int> m;
        for (int i = 0; i < n; i++) {
            m[s[i]]++;
        }

        if (m.size() == 1) {
            cout << s << '\n';
            continue;
        }

        char x, y;
        int a = 0, b = INT_MAX;

        for (const auto& e : m) {
            if (e.second > a) {
                a = e.second;
                x = e.first;
            }
            if (e.second <= b) {
                b = e.second;
                y = e.first;
            }
        }

        for (int i = 0; i < n; i++) {
            if (s[i] == y) {
                s[i] = x;
                break;
            }
        }

        cout << s << '\n';
    }
    return 0;
}

int main() {
    solve();
    return 0;
}