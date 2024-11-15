#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1000000007;




int solve() {
    IOS
    string s;
    cin >> s;
    string result = "";

    for (char c : input) {
        result += 'z' - (c - 'a');
    }

    cout << result << endl;
    return 0;
}

int main() {
    solve();
    return 0;
}



