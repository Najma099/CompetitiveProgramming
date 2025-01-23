#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1000000007;

int m, n;
vector<vector<int> > arr;
vector<int> res;

bool check(int mid) {
    vector<int> rest(n, 0);
    int count = 0;
    for (int i = 0; i < n; i++) {
        int a = 0;
        int sum = arr[i][0] * arr[i][1] + arr[i][2];
        int fullc = mid / sum;
        int rem = mid % sum;
        a = fullc * arr[i][1];
        a += min(arr[i][1], rem / arr[i][0]);
        rest[i] = a;
        count += a;
    }
    if (count >= m) {
        res = rest;
        return true;
    } else {
        return false;
    }
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

    cout << ans << endl;
    int tot = 0;
    for (int i = 0; i < n; i++) {
        if (tot + res[i] > m) {
            cout << m - tot << " ";
            tot = m;
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
