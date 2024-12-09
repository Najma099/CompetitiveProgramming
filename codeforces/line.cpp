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
        int m;
        cin >> n >> m;
        vector < int > arr;
        for(int i = 0; i < m; i++) {
            string s;
            cin >> s;
            arr.push_back(s.size());
        }
        int a = 0;
        int count= 0;
        for(int i = 0; i < arr.size(); i++) {
            if( a + arr[i] <= m) {
                count++;
            }
            else 
                break;
        }
        cout << count << '\n';
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
