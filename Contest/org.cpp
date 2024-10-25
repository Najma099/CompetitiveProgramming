#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1000000007;

int solve() {
    IOS
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int min = __INT_MAX;
        int max = __INT32_MAX;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            min = min(min,x);
            max = max(max,x);

        }
        cout << n - 1 * (max - min) << '\n';
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
