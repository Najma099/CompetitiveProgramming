#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    ll k;
    cin >> n >> m >> k;
    vector<ll> arr(n), brr(m);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> brr[i];
    }

    sort(arr.begin(), arr.end());
    sort(brr.begin(), brr.end());

    int count = 0;
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (abs(arr[i] - brr[j]) <= k) {
            count++;
            i++;
            j++;
        } 
        else if (arr[i] < brr[j]) {
            i++;
        } 
        else {
            j++;
        }
    }

    cout << count << '\n';
}

int main() {
    solve();
    return 0;
}
