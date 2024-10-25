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
        string s;
        cin >> n >> s;
        
        bool flag = false;
        if(s[i] == '1' || s[n - 1] == '1') {
            flag = true;
        }

        for(int i = 0; i < n - 1; i++) {
            if(s[i] == s[i + 1] == '1')
                flag = true;
        }
        if(flag)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
