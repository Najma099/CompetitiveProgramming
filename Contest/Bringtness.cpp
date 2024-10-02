#include <iostream>
#include <cmath>
using namespace std;

void solve() {
    long long n; 
    cin >> n;
    long long l = 1, h = 2e18, ans = -1;
    while(l <= h) {
        long long mid = (l + h) / 2;
        long long t = sqrt(mid);
        while (t * t > mid) t--;
        while ((t + 1) * (t + 1) <= mid) t++;
        
        long long cnt = mid - t;
        if(cnt >= n) {
            ans = mid;
            h = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << ans << '\n';
}

int main() {
    int t; 
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
