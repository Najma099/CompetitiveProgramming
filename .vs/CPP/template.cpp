#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1000000007;




int solve() {
    IOS
    int t;
    t = 1;
    while (t--) {
        string s;
        cin >> s;
        cout << rec(s);
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
