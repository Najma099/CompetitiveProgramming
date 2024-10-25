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
        char c = s[0];
        bool check = true;
        for(int i = 1; i < s.size(); i++) {

            if(s[i] > c) {
                check = false;
            }
        
        }
        string t = "";
        if(check) {
            for(int i = 1; i < s.size(); i++) {
                t += c;
        
            }
        }
        else {
            c++;
             for(int i = 1; i < s.size(); i++) {
                t += c;
        
            }
        }
        cout << t << '\n';

    }
    return 0;
}

int main() {
    solve();
    return 0;
}
