#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<long long> arr(n);
        vector<int> brr(2 * k + 1, 0);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            brr[arr[i] % (2 * k)]++;
        }

        bool invalid = false;
        for (int i = 1; i <= k; i++) {
            if (brr[i] > 0 && brr[i + k] > 0) {
                cout << "-1" << '\n';
                invalid = true;
                break;
            }
        }
        if (invalid) continue;

        int first = -1, last = -1;
        for (int i = 0; i <= 2 * k; i++) {
            if (brr[i] > 0) {
                if (first == -1) first = i;
                last = i;
            }
        }

        long long ans = 0;
        if (last - first < k) {
            ans = last;
        } else {
            for (int i = k + 1; i <= 2 * k; i++) {
                if (brr[i] > 0) {
                    ans = i;
                    break;
                }
            }

            int maxreach = (ans + k) % (2 * k);
            for (int i = maxreach + 1; i < k; i++) {
                if (brr[i] > 0) {
                    cout << "-1" << '\n';
                    invalid = true;
                    break;
                }
            }
            if (invalid) continue;

            for (int i = 1; i <= k; i++) {
                if (brr[i] > 0) ans = i;
            }
        }

        sort(arr.begin(), arr.end());
        long long maxm = arr[n - 1];

        if (ans == 2 * k) ans = 0;
        for (long long i = maxm; i < maxm + 2 * k + 1; i++) {
            cout << i << '\n';
            break;
        }
    }
}
