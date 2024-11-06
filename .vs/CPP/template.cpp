#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1000000007;


int rec(string& s) {
   
    int count = 0;
    int sum = 0;
    int dp[101];
    for(int i = 0; i < s.size(); i++) {

        if(s[i] == 'A')
            dp[i] = count;
        else if (s[i] == 'Q') {
            for(int j = 0; j < i; j++) {
                if(s[j] == 'A')
                    sum += dp[j];
            }
            count++;
        }

    }
    return sum;
}

int solve() {
    IOS
    int t;
    t = 1;
    while (t--) {
        string s;
        cin >> s;
        cout << rec(s);
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
