#include<iostream>
#include<vector>
using namespace std;

int solve() {
    int t;
    cin >> t;
    while(t--) {

        string s, t;
        cin >> s >> t;
        int ans = 0;
        int a = s.size();
        int b = t.size();
        int c = min(a,b);
        
        for(int i = 0; i < c; i++) {
            if(s[i] == t[i]) {
                ans = i;
            }
            else{
                break;
            }
        }
        ans++;
        if(ans == c) {
            cout << max(a,b) + 1 << '\n';
        }
        else {
            int sol = (ans) + (a - ans) + (b - ans) + 1;
            cout <<sol << '\n';
        }
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
