#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1000000007;

int solve() {
    IOS
    int t;
    t = 1;
    while (t--) {
        int n;
        cin >> n;
        vector <int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int prev = arr[0];
        int curr = 0;
        int count = 0;
        for(int i = 1; i < n; i++) {
            int curr = arr[i];
            if(curr < arr[i]) {
                curr += arr[i + 1];
            }
        }
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
