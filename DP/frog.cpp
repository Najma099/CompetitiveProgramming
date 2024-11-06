#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1000000007;


int N, K;
vector<int> arr;
int dp[10005];

int rec(int level) {
    if(level >= n)
        return 0;

    if(dp[level] != -1) {
        return dp[level];
    }
    int ans = __INT16_MAX__;
    for(int i = 1; i <= K; i++) {
        ans = min(ans,rec(level + i)+ abs(arr[level]-arr[level + i]));
    }
    return dp[level] = ans;
}
int solve() {
    IOS
    int t;
    t = 1;
    while (t--) {
        cin >> N >> K;
        arr.resize(n);
        for(int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        memset(dp,-1,sizeof(dp));
        cout << rec(0) << '\n';
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
