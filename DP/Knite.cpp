#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int N, M;
int dp[51][51];

int rec(int n, int m) {
    if (n < 1 || m < 1)
        return 0;
    if (n == 1 && m == 1)
        return 1;
    if (dp[n][m] != -1)
        return dp[n][m];
    
    int ans = 0;
    if (n > 2 && m > 1)
        ans += rec(n - 2, m - 1);
    if (n > 1 && m > 2)
        ans += rec(n - 1, m - 2);
    
    return dp[n][m] = ans;
}

int solve() {
    IOS
    int t;
    cin >> t;
    while (t--) {
       cin >> N >> M;
       memset(dp, -1, sizeof(dp));
       cout << rec(N, M) << '\n';
    }
    return 0;
}

int main() {
    freopen("knight.in", "r", stdin);
    freopen("knight.out", "w", stdout);
    solve();
    return 0;
}
