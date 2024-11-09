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
       ll n;
       int k;
       cin >> n >> k;
       if(n % 3 == 0) {
            for(int i = 1; i < 3; i++) {
                cout << n/3 << " ";
            }
            cout << '\n';
       }
       else if(n % 2 == 1) {
            cout << 1 << " ";
            for(int i = 0; i < 2; i++) {
                cout << n/2 << " ";
            }
            cout << '\n';
       }
       else {
            if(n/2 % 2 == 0) {
                cout << n/2 << " ";
                cout << n/4 << " ";
                cout << n/4 << '\n';
            }
            else {
                cout << 2 << " ";
                cout << (n - 2)/2 << " ";
                cout << (n - 2)/2 << '\n';
            }
       }
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
