#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int solve() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<set<int>> arr(n + 1);
        for (int i = 0; i < k; i++) {
            int l, r, m;
            cin >> l >> r >> m;
            for (int j = l; j <= r; j++) {
                arr[j].insert(m);
            }
        }
        vector<int> result(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            for (int num = 1; num <= n; num++) {
                if (arr[i].find(num) == arr[i].end()) {
                    result[i] = num;
                    break;
                }
            }
        }
        bool valid = true;
        for (int i = 1; i <= n; i++) {
            if (result[i] == 0) {
                valid = false;
                break;
            }
        }
        if (valid) {
            for (int i = 1; i <= n; i++) {
                cout << result[i] << " ";
            }
            cout << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
    return 0;
}

int main() {
    solve();
    return 0;
}