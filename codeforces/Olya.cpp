#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int solve() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;
        int h = n;
        int minn = 1e9;
        vector<int> arr; 
        
        while (n--) {

            int m;
            cin >> m;
            vector<int> brr(m);
            for (int i = 0; i < m; i++) {
                cin >> brr[i];
                minn = min(minn, brr[i]);
            }
            sort(brr.begin(), brr.end());
            arr.push_back(brr[1]);

        }

        sort(arr.begin(), arr.end());
        ll sum = minn;
        for (int i = arr.size() - 1; i >= 0 && h > 1; i--, h--) {
            sum += arr[i];
        }
        cout << sum << '\n';

    }
    return 0;
}

int main() {
    solve();
    return 0;
}
