#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        ll m, a , b , c;
        cin >> m >> a >> b >> c;

        int count = 0;
        count += min(a , m);
        count += min(b, m);

        int rem = (m + m) - count;
        count += min( rem, c);

        cout << count << '\n';

    }
    return 0;
}

int main() {
    solve();
    return 0;
}
