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
        vector<ll> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        sort(a.begin(), a.end());
        
        ll maxSum = 0;
        for (int i = 0; i < n / 2; ++i) {
            maxSum += abs(a[i] - a[n - i - 1]);
        }
        
        cout << maxSum << "\n";
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
