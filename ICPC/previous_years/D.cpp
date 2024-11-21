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
        int N,K;
        cin >> N >> K;
        string s;
        cin >> s;
        int ini = 0;
        int dirc = 1;
        for(int i = 0; i < s.size();i++) {
            if(s[i] == 'U') {
                ini = (ini + 1) % N;
            }
            else if(s[i] == 'S') {
                ini = (ini + 2) % N;
            }
            else {
                ini = (ini - 1) % N;
            }
        }
        cout << ini + 1 << '\n';
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
