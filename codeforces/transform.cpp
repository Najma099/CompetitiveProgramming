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
        vector < ll > arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        if(n % 2 == 0) {
            ll res = 0;
            for(int i = 0; i < n - 1; i++) {
                if(i <= n - 2) {
                    if(arr[i] == arr[i + 2]) {
                        cout << "NO" << '\n';
                        break;
                    }
                }
                if(i % 2 == 0) {
                    res += arr[i + 2] - arr[i];
                }
            }
            if(res == 0)
                cout << "YES" <<'\n';
            else 
                cout << "NO" << '\n';
        }
        else {
            ll res = 0;
            for(int i = 0; i < n - 1; i++) {
                if(i <= n - 2) {
                    if(arr[i] == arr[i + 2]) {
                        cout << "NO" << '\n';
                        break;
                    }
                }
                    res += arr[i + 1] - arr[i];
                
            }
            if(res == 0)
                cout << "YES" <<'\n';
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
