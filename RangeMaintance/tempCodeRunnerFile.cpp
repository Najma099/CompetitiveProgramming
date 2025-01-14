#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;


int solve() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, k , q;
        cin >> n >> k >> q;
        int arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        } 
        int ans = 0;
        int len = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i] <= q) 
                len++;
            else {
                if(len >= k)
                    ans += (len - k + 1) * (len - k + 1);
                len = 0;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
