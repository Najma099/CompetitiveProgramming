#include<iostream>
#include<vector>
using namespace std;

int solve () {
    int t;
    cin >> t;
    while(t--) {
        long long n , k;
        cin >> n >> k;
        long long ans = 0;
        
        if(k == 1) {
            cout << n << endl;
            continue;
        }

        while(n > 0) {
            ans += n % k;
            n /= k;
        }
        
        cout << ans << endl;
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
