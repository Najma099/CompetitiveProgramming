#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int n, m;
vector<int> klg, str;

int solve() {
    IOS
    cin >> n >> m;
    klg.resize(n);
    str.resize(m);

    for (int i = 0; i < n; i++) 
        cin >> klg[i];
    for (int i = 0; i < m; i++) 
        cin >> str[i];

    vector<int> dp(m + 1, 0);
    
    for (int i = n - 1; i >= 0; i--) {
        vector<int> next(m + 1, 0);
        for (int j = m - 1; j >= 0; j--) {
            int curr = klg[i] + str[j];
            int gain = 0;

            if (j + 1 < m) {
                int rightGain = klg[i] + str[j + 1];
                gain = max(gain, abs(rightGain - curr) + next[j + 1]);
            }

            if (i + 1 < n) {
                int downGain = klg[i + 1] + str[j];
                gain = max(gain, abs(downGain - curr) + dp[j]);
            }

            next[j] = gain;
        }
        dp = next; 
    }

    return dp[0];
}

int main() {
    cout << solve() << endl;
    return 0;
}


