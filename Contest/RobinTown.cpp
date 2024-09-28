#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> w(n);
        long long total = 0;

        for (int i = 0; i < n; i++) {
            cin >> w[i];
            total += w[i];
        }

        if (n <= 2) {
            cout << -1 << '\n';
            continue;
        }

        sort(w.begin(), w.end());

        long long low = 0, high = 1e18, ans = -1;

        while (low <= high) {
            
            long long mid = low + (high - low) / 2;
            vector<long long> b(w.begin(), w.end());
            b[n - 1] += mid;

            double avg = (total + mid) / (double)n;
            long long unhap = 0;

            for (int i = 0; i < n; i++) {
                if (b[i] < avg / 2.0) {
                    unhap++;
                }
            }

            if (unhap > n / 2) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        cout << ans << '\n';
    }
    return 0;
}
