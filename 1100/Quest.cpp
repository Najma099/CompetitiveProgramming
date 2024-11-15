#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1000000007;

int dp[1000001];

int opr(ll x, ll y) {
    if (x == y) 
        return 0;
    if (x < y) 
        return 1e9;
    if (dp[x] != -1) 
        return dp[x];
    int res = 1 + opr(x - 1, y);
    if (x % 2 == 0) 
        res = min(res, 1 + opr(x / 2, y));
    if (x % 3 == 0) 
        res = min(res, 1 + opr(x / 3, y));
    return dp[x] = res;
}

int solve() {
    IOS
    int t;
    cin >> t;
    while (t--) {
        ll x, y;
        cin >> x >> y;
        memset(dp, -1, sizeof(dp));
        cout << opr(x, y) << endl;
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
