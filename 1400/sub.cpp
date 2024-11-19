#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1000000007;

int solve() {
    IOS
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        vector<int> res(n);
        for (int i = 0; i < n; i++) {
            int low = 1, high = i + 1, ans = 0;
            while (low <= high) {
                int mid = (low + high) / 2;
                if (arr[i - mid + 1] >= mid) {
                    ans = mid;
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
            res[i] = ans;
        }

        for (int i = 0; i < n; i++) {
            cout << res[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
