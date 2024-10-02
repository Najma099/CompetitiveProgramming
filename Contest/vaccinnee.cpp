#include <iostream>
using namespace std;
 
int main() {
    int t; 
    cin >> t;
    while(t--){
        int n, k, d, w;
        cin >> n >> k >> d >> w;
        int ans = 0;
        int cnt = 0;
        int cur = -1;
        for (int i = 0; i < n; i++) {
            int tr;
            cin >> tr;
            if (cur + d < tr || cnt == 0) {
                ans++;
                cnt = k - 1;
                cur = tr + w;
            } else {
                cnt--;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
