#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int solve() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    vector<pair<ll, int>> arr;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        arr.push_back({a, 1});
        arr.push_back({b, -1});
    }

    sort(arr.begin(), arr.end());
    int curr = 0, maxCount = 0;
    for (int i = 0; i < arr.size(); i++) {
        curr += arr[i].second;
        maxCount = max(curr, maxCount);
    }

    cout << maxCount << '\n';
    return 0;
}

int main() {
    solve();
    return 0;
}
