#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;

int solve() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++) 
            cin >> a[i];
        for (int i = 0; i < n; i++) 
            cin >> b[i];

        ll rm = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] < b[i]) {
                ll diff = b[i] - a[i];
                a[i] += 2 * diff;
                rm += diff;
            }
        }

        for (int i = 0; i < n; i++) {
            a[i] -= rm;
            if (a[i] < 0 || a[i] < b[i]) {
                cout << "NO" << '\n';
                break;  
            }
            if (i == n - 1) {  
                cout << "YES" << '\n';
            }
        }
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
