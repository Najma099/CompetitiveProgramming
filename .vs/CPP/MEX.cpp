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
        vector<int> a(n);
        for (int i = 0; i < n; i++) 
            cin >> a[i];

        int b = 0;
        bool x = false;

        for (int i = 0; i < n; i++) {
            if (a[i] != 0 && !x) {
                b++;
                x = true;
            }
            if (a[i] == 0) 
                x = false;
        }

        cout << min(b, 2) << endl; 
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
