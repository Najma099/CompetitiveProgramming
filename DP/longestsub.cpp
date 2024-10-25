#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1000000007;

int n;
int arr[1001];
int dp[1001][1001];

int rec(int level,int ele) {
    if(level == n) {
        return 0;
    }

    if(dp[level][ele] != -1) {
        return dp[level][ele];
    }

    int ans = 0;
    ans = rec(level + 1, ele);
    if(ele == n || arr[level] > ele) {
        ans = max(ans, 1 + rec(level + 1,arr[level]));
    }
    return dp[level][ele] = ans;
}

int solve() {
    IOS
    int t;
    t = 1;
    while (t--) {
        memset(dp,-1,sizeof(dp));
        cin >> n;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int ans = rec(0,n);
        cout << ans << '\n';
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
