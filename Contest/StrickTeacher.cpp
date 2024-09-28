
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n, m, q;
        cin >> n >> m >> q;

        int jj, jk;
        cin >> jj >> jk;

        int Q;
        cin >> Q;

        int r = min(jj, jk);
        int rr = max(jj, jk);

        int ans;
        if (Q < r) {
            ans = jj - 1;
        } else if (Q > rr) {
            ans = n - rr;
        } else {
            int y = (jj + jk) / 2;
            ans = min(abs(y - jj), abs(y - jk));
        }

        cout << ans << endl;
    }

    return 0;
}
