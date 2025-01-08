#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'p')
                s[i] = 'q';
            else if(s[i] == 'q')
                s[i] = 'p';
        }
        reverse(s.begin(), s.end());
        cout << s << '\n';
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
