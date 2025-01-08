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
        cin >> n ;
        vector < int > arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int e = 1e9;
        set<int> st;
        for(int i = 0; i < n; i++) {
            if(st.find(arr[i]) != st.end()) {
                arr[i] = e;
                e--;
            }
            else {
                st.insert(arr[i]);
            }
        }
        for(int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
