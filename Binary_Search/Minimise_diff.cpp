#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1000000007;


bool check(ll mid, ll arr[], int n, ll k) {
    int count = 0;
    for(int i = 1; i < n; i++) {
        count += ((arr[i] - arr[i - 1] + mid - 1)/mid - 1);
    }
    return count <= k;
}


int solve() {
    IOS
    int t;
    cin >> t;
    while (t--) {
        int n;
        ll k;
        cin >> n >> k;
        ll arr[n];
        ll prev = 0;
        ll low, high;
        low = 1;
        high = 1;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            high = max(high,arr[i] - prev);
            prev = arr[i];
        }
        ll ans = 0;
        while(low <= high) {
            ll mid = low + (high - low)/2;
            if(check(mid, arr, n, k)) {
                ans = mid;
                high = mid - 1;
            }
            else 
                low = mid + 1;
        }

        cout << ans << '\n';
    }
    return 0;
}

int main() {
    solve();
    return 0;
}