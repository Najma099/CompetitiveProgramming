#include<iostream>
#include<vector>
using namespace std;

int solve() {
    int t;
    cin >> t;
    
    while(t--) {
        int n, a, b;
        cin >> n >> a >> b;
        
        if (n == 2) {
            cout << "NO" << endl;
            continue;
        }
        
        int dist = abs(a - b);
        
        if (dist % 2 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}

int main() {
    solve();
    return 0;
}
