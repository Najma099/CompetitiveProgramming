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
        string s;
        cin >> s;
        int cta,ctb;
        cta = ctb = 0;
        for(int i = 0; i < s.size();i++) {
            if(s[i]=='a')
                cta++;
            else
                ctb++;
        }
        if(cta == ctb)
            cout << "YES" << '\n';
        else 
            cout << "NO" <<'\n'

    }
    return 0;
}

int main() {
    solve();
    return 0;
}
