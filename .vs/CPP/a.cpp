#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n >> k;
        vector < int > arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        bool flag = false;
        for(int i = 0; i < n; i++) {
            flag = false;
            for(int j = 0; j < n; j++) {
                if(i == j) continue;
                if((arr[i] - arr[j] ) % k == 0) {
                    flag = true;
                }       
            }
            if(!flag) {
                cout << "YES" <<'\n';
                cout << i + 1 << '\n';
                break;
            }
        }
        if(flag) {
            cout << "NO" << '\n';
        }
    }
}

int main() {
    solve();
    return 0;
}
