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
       int n , x;
       cin >> n >> x;
       int arr[n];
       int odd, even;
       odd = even = 0;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            if(arr[i] % 2 == 0)
                even++;
            else 
                odd++;
        }
        if(odd == 0) {
            cout << "NO" << '\n';
            continue;
        }

        if(x % 2 != 0) {
            odd--;
            x = (x - 1)/2;
            if(odd/2 + even/2 >= x)
                cout << "YES" << '\n';
            else 
                cout << "NO" << '\n';
        }
        else {
            odd--;
            if(even == 0) {
                cout << "NO" << '\n';
                continue;
            }
            even--;
            x = (x - 2)/2;
            if(odd/2 + even/2 >= x)
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }

    }
    return 0;
}

int main() {
    solve();
    return 0;
}
