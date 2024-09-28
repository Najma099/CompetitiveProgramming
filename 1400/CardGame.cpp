#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int T = 0; T < t; T++) {
        int n;
        long long k;
        cin >> n >> k;

        vector<long long> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        if (k > 2) {
            cout << 0 << '\n';
            continue;
        }

        sort(arr.begin(), arr.end());
        long long min_diff = arr[0];
        for (int i = 0; i < n - 1; i++) {
                min_diff = min(min_diff, arr[i + 1] - arr[i]);
            }

        if (k == 1) {
            cout << min_diff << '\n';
            continue;
        }

        //long long min_val = LLONG_MAX;

        // for (int i = 0; i < n; i++) {
        //     for (int j = i+1; j < n; j++) {
        //         long long val = (arr[j] - arr[i]);
                
        //         auto lb = lower_bound(arr.begin(), arr.end(), val);
        //         int idx = lb - arr.begin();
 
        //         if (idx < n) {
        //             min_diff = min(min_diff, arr[idx] - val);
        //         }
 
        //         if (idx > 0) {
        //             min_diff = min(min_diff, val - arr[idx - 1]);
        //         }
        //     }
        // }
 

        for (int i = 0; i < n ; i++) {
            for (int j = i + 1; j < n; j++) {
                long long diff = arr[j] - arr[i];
                
                auto lb = lower_bound(arr.begin(), arr.end(), diff);
                int idx = lb - arr.begin();

                if (idx < n) {
                    min_diff = min(min_diff, arr[idx] - diff);
                }
                if (idx > 0) {
                    min_diff = min(min_diff, diff - arr[idx - 1]);
                }
            }
        }

        cout << min_diff << '\n';
    }

    return 0;
}
