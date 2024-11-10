#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int arr[8][8];
int dp[8][8];

int rec(int n, int m) {
    if (n < 0 || m < 0 || n > 7 || m > 7) 
        return INT_MAX;
    if (n == 0 && m == 7)
        return arr[n][m];
    if (dp[n][m] != -1)
        return dp[n][m];
    
    int ans = min({rec(n - 1, m), rec(n, m - 1), rec(n - 1, m + 1)}) + arr[n][m];
    
    return dp[n][m] = ans;
}

int solve() {
    IOS;
    int t = 1;
    while (t--) {
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                cin >> arr[i][j];
            }
        }
        memset(dp, -1, sizeof(dp));
        cout << rec(7, 0) << '\n';
    }
    return 0;
}

int main() {
    freopen("king2.in", "r", stdin);
    freopen("king2.out", "w", stdout);
    solve();
    return 0;
}
