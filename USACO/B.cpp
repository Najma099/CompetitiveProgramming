#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1000000007;

int solve() {
    IOS
    int t;
    cin >> t;
    while (t--) {
        string i;
        cin >> i;
        long double x = stold(i);
        cout << fixed << setprecision(12) << 1.0 / x << endl;
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
