#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n , k;
        cin >> n >> k;
        vector<int> arr(n);
        int even = 0;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            if(arr[i] % 2 == 0)
                even++;
        }
        
        if(k == 2) {
            if(even >= 1)
                cout << 0 << '\n';
            else
                cout << 1 << '\n';
        }

        else if(k == 3 || k == 5) {

            int opr = 1e9;
            bool flag = false;
            for(int i = 0; i < n; i++) {
                if(arr[i] % k == 0) {
                    flag = true;
                    break;
                }
                else {
                    opr = min(opr, k - (arr[i] % k));
                }
            }
            if(flag)
                cout << 0 << '\n';
            else 
                cout << opr << '\n';

        }
        else {

            if(even >= 2) {
                cout << 0 << '\n';
                continue;
            }

            int opr = 1e9;
            bool flag = false;
            for(int i = 0; i < n; i++) {
                if(arr[i] % k == 0) {
                    flag = true;
                    break;
                }
                else {
                    opr = min(opr, k - (arr[i] % k));
                }
            }
            if(flag)
                cout << 0 << '\n';
            else if(even == 1) 
                cout << 1 << '\n';
            else 
                cout << min(opr,2) << '\n';
            
        }
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
