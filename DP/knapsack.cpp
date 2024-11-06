#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1000000007;

int N, W;
vector <int> wth;
vector <ll> val;
ll dp[101][10001];

ll rec(int level,ll wgthL) {

    if(level == N)
        return 0;
    
    if(dp[level][wgthL] != -1) 
        return dp[level][wgthL];
    
    ll ans = rec(level + 1 , wgthL);
    if(wth[level] <= wgthL) {
        ans = max(ans,rec(level + 1, wgthL - wth[level]) + val[level]);
    }

    return dp[level][wgthL] = ans;
}

int solve() {
    IOS
    int t;
    t = 1;
    while (t--) {

        cin >> N >> W;
        wth.resize(N);
        val.resize(N);
        for(int i = 0; i < N; i++) {
            cin >> wth[i];
            cin >> val[i];
        }
        memset(dp,-1,sizeof(dp));
        cout << rec(0,W) << '\n';
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
