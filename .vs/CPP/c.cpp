#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1000000007;

string c;
int g, h;
vector<vector<int>> dp;

int rec(int i, int y) {
    
    if (i > y) {
        return 0;
    }

    if (i == y) 
        return 1;

    if (dp[i][y] != -1) {
        return dp[i][y];
    }

    int ans = 0;
    if (c[i] == c[y]) {
        ans = max(2 + rec(i + 1, y - 1), ans);
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
        string a, b;
        cin >> a >> b; 
        g = a.size();
        h = b.size();
        
        dp = vector<vector<int>>(g + 1, vector<int>(h + 1, -1));  
        c = a + b;

        int ans = 0;
        for (int i = 0; i < g; i++) {
            for (int j = g; j < h; j++) { 
                if (c[i] == c[j]) {
                    ans = max(ans, rec(i, j)); 
                }
            }
        }

        cout << ans << endl; 
    }

    return 0;
}

int main() {
    solve();
    return 0;
}
