#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int solve() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        string s;
        cin >> s;

        int count = 0, ans = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '0')
                count++;
            else
                count = 0;

            if (count == m) {
                ans++;
                count = 0;
                i += k - 1;
            }
            
            
        }
        
        cout << ans << '\n';
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
