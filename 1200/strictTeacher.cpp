#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m, q;
        cin >> n >> m >> q;

        vector<int> a(m);
        for(int i = 0; i < m; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        for(int i = 0; i < q; i++) {
            int x;
            cin >> x;
            int idx = lower_bound(a.begin(), a.end(), x) - a.begin() ;
            if (idx == m) {
                cout << n - a[m - 1] << '\n';
            } else if (idx == 0) {
                cout << a[0] - 1 << '\n';
            } else {
                cout << (a[idx] - a[idx - 1])/2 << '\n';
            }
        }
    }
    return 0;
}
