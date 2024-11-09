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
        int arr[n];
        map<int,long> mp;
        for(int i = 0; i < n; i++) {
            int a;
            cin >> a;
            mp[a - 1]++;
        }
        ll ans = 0;
        for(int it = mp.begin(); it != mp.end(); it++) {
            if(mp[it] > 1)
                ans = mp[it] - 1;
        }
        cout << ans << '\n';
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
