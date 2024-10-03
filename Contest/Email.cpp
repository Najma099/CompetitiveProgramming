#include<iostream>
#include<vector>
using namespace std;

int solve() {
    int n;
    string s, t;
    cin >> n;
    while (n--) {
        cin >> s >> t;
        int i = 0, j = 0;
        bool ans = true;

        if (s.size() > t.size()) {
            ans = false;
        } 
        else {
            while (i < s.size() && j < t.size()) {
                if (s[i] != t[j]) {
                    if (j > 0 && t[j] == t[j - 1]) {
                        j++;
                    } else {
                        ans = false;
                        break;
                    }
                } else {
                    i++;
                    j++;
                }
            }
            if (i < s.size()) {
                ans = false;
            }

            while (j < t.size() && t[j] == t[j - 1]) {
                j++;
            }

            if (j < t.size()) {
                ans = false;
            }
        }

        if (ans) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
