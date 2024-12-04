#include <bits/stdc++.h>
using namespace std;

int solve() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int t = 0, ans = 0;
        int l = 1;
        int sum = 1;

        for (int i = 0; i < n; i++) {
            tot += v[i];
            while (t >= sum) {
                t -= sum;
                l++;
                req += 8;
            }
            if (t == 0) {
                ans++;
            }
        }

        cout << ans << '\n';
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
