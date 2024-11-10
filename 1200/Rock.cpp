#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1000000007;

ll bit(ll num) {
    int msb = 0;
    while (num > 1) {
        num >>= 1;
        msb++;
    }
    return msb;
}

int solve() {
    IOS
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll arr[n];
        unordered_map<int, ll> grp;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            ll ans = bit(arr[i]);
            grp[ans]++;
        }

        ll res = 0;
        for (auto& grps : grp) {
            ll count = grps.second;
            res += (count * (count - 1)) / 2;
        }
        cout << res << '\n';
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
