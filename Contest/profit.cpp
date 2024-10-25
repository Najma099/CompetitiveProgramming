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
        ll a,b;
        cin >> a >> b;

        if(a >= b) 
            cout << a << '\n';
        else {
            ll c = 1;
            while(a > 0 && c > 0) {
                c *= 2;
                f()
            }
        }
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
