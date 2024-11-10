#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1000000007;

int solve() {
    string s;
    cin >> s;
    int ans = 1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'A') {
            if (ans == 1)
                ans = 2;
            else if (ans == 2)
                ans = 1;
        } 
        else if (s[i] == 'B') {
            if (ans == 2)
                ans = 3;
            else if (ans == 3)
                ans = 2;
        } 
        else if (s[i] == 'C') {
            if (ans == 1)
                ans = 3;
            else if (ans == 3)
                ans = 1;
        }
    }
    cout << ans << '\n';
    return 0;
}

int main() {
    IOS;
    solve();
    return 0;
}
