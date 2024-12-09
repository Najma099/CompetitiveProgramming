#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define N 100010
ll a[N], b[N];

ll price(ll k, ll n) {
    for (ll i = 1; i <= n; i++)
        b[i-1] = a[i] + (i * k);

    sort(b, b + n);

    ll p = 0;
    for (ll i = 0; i < k; i++)
        p += b[i];

    return p;
}

int solve() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while (t--) {
        ll n, m;
        cin >> n >> m;

        for (ll i = 1; i <= n; i++) {
            cin >> a[i];
        }

        ll low = 0, high = n, ans = 0, cost = 0;

        while (high >= low) {
            ll mid = (low + high) / 2;

            ll k = price(mid, n);

            if (k == m) {
                cout << mid << " " << m << '\n';
                return 0;
            }

            if (k > m) {
                high = mid - 1;
            } else {
                low = mid + 1;
                ans = mid;
                cost = k;
            }
        }

        cout << ans << " " << cost << '\n';
    }

    return 0;
}

int main() {
    solve();
    return 0;
}
