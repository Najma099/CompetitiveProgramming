#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int m, n;
vector<vector<int>> arr;
vector<int> res;

bool check(int mid) {
    vector<int> rest(n, 0);
    ll count = 0;
    for (int i = 0; i < n; i++) {
        ll sum = 1LL * arr[i][0] * arr[i][1] + arr[i][2];
        ll fullc = mid / sum;
        ll rem = mid % sum;
        int a = fullc * arr[i][1];
        a += min(arr[i][1], (int)(rem / arr[i][0]));
        rest[i] = a;
        count += a;
    }
    if (count >= m) {
        res = rest;
        return true;
    }
    return false;
}

int solve() {
    IOS
    cin >> m >> n;
    arr.resize(n, vector<int>(3));
    res.resize(n, 0);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    int low = 0;
    int high = 1e9;
    int ans = high;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (check(mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << ans << '\n';
    int tot = 0;
    for (int i = 0; i < n; i++) {
        if (tot + res[i] > m) {
            cout << m - tot << " ";
            tot = m;
            break; 
        } else {
            cout << res[i] << " ";
            tot += res[i];
        }
    }
    cout << '\n';
    return 0;
}

int main() {
    solve();
    return 0;
}
