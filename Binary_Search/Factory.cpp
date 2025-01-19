#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool check(ll mid, const vector<ll>& arr, ll t, int n) {
    ll count = 0;
    for (int i = 0; i < n; i++) {
        count += mid / arr[i];
        if (count >= t) break; 
    }
    return count >= t;
}

int solve() {
    IOS
    int t;
    t = 1;
    while (t--) {
        int n;
        ll target;
        cin >> n >> target;
        vector<ll> arr(n);

        ll low = 1, high = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            high = max(high, arr[i]);
        }
        high *= target;

        ll ans = high;
        while (low <= high) {
            ll mid = low + (high - low) / 2;
            if (check(mid, arr, target, n)) {
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
