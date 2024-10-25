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

        ll n , k;
        cin >> n >> k;
        ll arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i]; 
        }

        sort(arr, arr + n);
        if(k <= n) {
            cout << k << '\n';
            continue;
        }

        ll ans = 0;
        ll min = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i] > min) {
                ll bottle = (arr[i] - min) * (n - i);
                min = arr[i];
                if(k - bottle <= 0) {
                    ans += k;
                    break;
                } 
                else {
                    ans++;
                    ans += bottle;
                    k -= bottle;
                } 
            }
            else {
                ans++;
            }
        }
        cout << ans <<'\n';
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
