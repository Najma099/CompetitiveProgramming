#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if(n % 2 == 0)  
            cout << (n/2 * 2) - 1 << '\n';
        else 
            cout << (n / 2 * 2) << '\n';
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
