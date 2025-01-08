#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        ll k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;
        
        ll cnt = 0;
        ll pk = 1;
        
        while (pk <= r2) {
            ll lll = (l2 + pk - 1) / pk;
            ll vv = r2 / pk;
            
            ll lb = max(l1, lll);
            ll ub = min(r1, vv);
            
            if (lb <= ub) {
                cnt += (ub - lb + 1);
            }
            
            if (pk > r2 / k) break;
            pk *= k;
        }
        
        cout << cnt << "\n";
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
