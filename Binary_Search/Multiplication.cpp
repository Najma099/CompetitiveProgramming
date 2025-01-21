#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool check(ll mid, ll n) {
    ll count = 0;
    for (int i = 1; i <= n; i++) {
        count += min((ll)n, mid / i); 
    }
    return count >= (ll)(n * n + 1) / 2; 
}

int solve() {
    IOS
    int t;
    t = 1; 
    while (t--) {
        ll n;
        cin >> n;

        ll low = 1;
        ll high = (ll)n * n;
        ll ans = -1;

        while (low <= high) {
            ll mid = low + (high - low) / 2;
            if (check(mid, n)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
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
