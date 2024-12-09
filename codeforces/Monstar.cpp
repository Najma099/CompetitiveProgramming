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
        ll k;
        cin >> n >> k;

        vector<int> ans;
        vector<pair<int, int>> arr;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x % k == 0)
                ans.push_back(i + 1);
            else {
                arr.push_back({x % k, i + 1});
            }
        }

        sort(arr.begin(), arr.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            if (a.first == b.first)
                return a.second < b.second;
            return a.first > b.first;
        });

        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }

        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i].second << " ";
        }
        cout << '\n';
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
