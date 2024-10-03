#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Wave {
    int time, fun, wait;
};

int solve() {
    int n;
    cin >> n;
    vector<Wave> waves(n);
    
    for (int i = 0; i < n; i++) {
        cin >> waves[i].time >> waves[i].fun >> waves[i].wait;
    }

    sort(waves.begin(), waves.end(), [](Wave a, Wave b) { return a.time < b.time; });

    vector<int> dp(n);
    dp[0] = waves[0].fun;

    for (int i = 1; i < n; i++) {
        dp[i] = waves[i].fun;
        for (int j = 0; j < i; j++) {
            if (waves[j].time + waves[j].wait <= waves[i].time) {
                dp[i] = max(dp[i], dp[j] + waves[i].fun);
            }
        }
    }

    int maxFun = *max_element(dp.begin(), dp.end());
    cout << maxFun << endl;

    return 0;
}

int main() {
    solve();
    return 0;
}
