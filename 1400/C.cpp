#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1000000007;




int solve() {
    IOS
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        int ans = 1;
        int d = 1;
        for(int i = 1; i < n; i++) {
            int curr = arr[i];
            if(arr[i] - 1 == arr[i - 1] || arr[i] + 1 == arr[i - 1]) {
                d++;
            }
            else {
                ans = max(ans,d);
                d = 1;
            }
        }
        ans = max(ans, d);
        cout << ans << '\n';
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
