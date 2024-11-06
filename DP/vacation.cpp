#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1000000007;

int N;
vector<vector<int>> arr;
int dp[100005][3];

int rec(int level, int prev) {
    if (level == N) {
        return 0;
    }
    if (dp[level][prev] != -1) {
        return dp[level][prev];
    }
    int ans = 0;
    for (int i = 0; i < 3; i++) {
        if (i != prev) {
            ans = max(ans, rec(level + 1, i) + arr[level][i]);
        }
    }
    return dp[level][prev] = ans;
}

int solve() {
    IOS;
    cin >> N;
    arr.resize(N, vector<int>(3));
    for (int i = 0; i < N; i++) {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }
    memset(dp, -1, sizeof(dp));
    int result = rec(0, -1);
    cout << result << endl;
    return 0;
}

int main() {
    solve();
    return 0;
}
