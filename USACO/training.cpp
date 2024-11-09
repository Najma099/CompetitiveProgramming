#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1000000007;

int solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        unordered_map<string, pair<int, int>> m;
        for (int i = 0; i < n; ++i) {
            string w;
            int s;
            cin >> w >> s;
            if (s == 1) m[w].first++;
            else m[w].second++;
        }
        int ans = 0;
        for (auto &p : m) ans += max(p.second.first, p.second.second);
        cout << ans << "\n";
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
