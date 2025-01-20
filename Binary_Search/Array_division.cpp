#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1000000007;


bool check(ll mid, const vector<ll>&arr , int k, int n) {
    int count = 1;
    ll sum = 0;
    for(int i = 0; i < n; i++) {
        if(sum + arr[i] <= mid) {
            sum += arr[i];
        }
        else {
            sum = arr[i];
            count++;
        }
    }
    return count <= k;
}

int solve() {
    IOS
    int t;
    t = 1;
    while (t--) {

        int n , k;
        cin >> n >> k;
        vector < ll > arr(n);
        ll low = -1e9;
        ll high = 0;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            low = max(low, arr[i]);
            high += arr[i];
        }

        ll ans = low;
        while(low <= high) {
            ll mid = low + (high - low) / 2;
            if(check(mid, arr, k, n)) {
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
