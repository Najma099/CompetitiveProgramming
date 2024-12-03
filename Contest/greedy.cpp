#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end());
        reverse(arr.begin(),arr.end());
        int sum = 0;
        for(int i = 0; i < n; i++) {
            if(sum + arr[i] <= k)
                sum += arr[i];
            else
                break;
        }
        cout << k - sum << '\n';
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
