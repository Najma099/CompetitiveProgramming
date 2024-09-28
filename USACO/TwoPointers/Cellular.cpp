#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<long long> c(n);
    vector<long long> t(m);

    for(int i = 0; i < n; i++) {
        cin >> c[i];
    }

    for(int i = 0; i < m; i++) {
        cin >> t[i];
    }

    int ci = 0;
    int ti = 0;
    long long ans = 0;

    while (ci < n) {
        while (ti < m - 1 && t[ti + 1] <= c[ci]) {
            ti++;
        }

        long long left = LLONG_MAX;
        if (ti >= 0) {
            left = abs(c[ci] - t[ti]);
        }

        long long right = LLONG_MAX;
        if (ti + 1 < m) {
            right = abs(c[ci] - t[ti + 1]);
        }

        long long minDist = min(left, right);
        ans = max(ans, minDist);

        ci++;
    }

    cout << ans << endl;
    return 0;
}
