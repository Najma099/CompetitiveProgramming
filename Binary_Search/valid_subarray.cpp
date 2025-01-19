#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1000000007;

int solve() {
    IOS
    int t;
    t = 1;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            arr[i] = 1 - arr[i];
        }

        vector<int> prefix(n);
        for(int i = 0; i < n; i++) {
            prefix[i] = arr[i];
            if (i) prefix[i] += prefix[i - 1];
        }

        int ans = 0;
        for (int i = 0; i < n; i++) {
            int low = i;
            int high = n - 1;
            int end = i - 1;

            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (prefix[mid] - prefix[i] <= k) {
                    if(arr[mid] == 1 && prefix[mid] - prefix[i] == k) {
                        high = mid - 1;
                    }
                    else {
                        end = mid;
                        low = mid + 1;
                    }
                }
                else {
                    high = mid - 1;
                }
            }
            int a = (end - i + 1);
            ans = max(ans,(a));
            cout << "ans:" << end << " ";
        }
        cout << ans << '\n';
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
