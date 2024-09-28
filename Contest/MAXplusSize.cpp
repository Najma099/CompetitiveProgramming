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
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int maxE = 0, cntE = 0;
        int maxO = 0, cntO = 0;

        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                cntE++;
                maxE = max(maxE, a[i]);
            } else {
                cntO++;
                maxO = max(maxO, a[i]);
            }
        }

        int scoreE = maxE + cntE;
        int scoreO = maxO + cntO;

        cout << max(scoreE, scoreO) << endl;
    }

    return 0;
}
