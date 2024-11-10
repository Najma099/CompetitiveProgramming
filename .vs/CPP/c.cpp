#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1000000007;

string a, b;
int n;
int dp[1002][1002];

int rec(int i, int y) {
    if(i >= n || y < 0) {
        return 0;
    }
    if(dp[i][y] != -1) {
        return dp[i][y];
    }
    int ans = 0;
    if(a[i] == b[y]) {
        ans = max(1 + rec(i + 1, y - 1), ans);
    }
    ans = max(ans, rec(i + 1, y));
    ans = max(ans, rec(i, y - 1));

    return dp[i][y] = ans;
}

int solve() {
    IOS
    int t;
    cin >> t;
    while (t--) {
       memset(dp, -1, sizeof(dp));
       cin >> a >> b; 
       n = a.size();
       int d = rec(0, b.size() - 1);
       if(d) {
           if(a[n-1] == b[0]) {
               cout << d * 2 << '\n';
           } else {
               cout << d * 2 + 1 << '\n';
           }
       } else {
           cout << 0 << '\n';
       }
    }

    return 0;
}

int main() {
    solve();
    return 0;
}
