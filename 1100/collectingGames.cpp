#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        pair<long long, int> arr[n + 1];
        for (int i = 1; i <= n; i++) {
            cin >> arr[i].first;
            arr[i].second = i;
        }
        sort(arr + 1, arr + n + 1);

        int nxt[n + 1];
        long long sum[n + 1];
        int ans[n + 1];
        nxt[0] = sum[0] = 0;

        for (int i = 1; i <= n; i++) {
            if (nxt[i - 1] >= i) {
                nxt[i] = nxt[i - 1];
                sum[i] = sum[i - 1];
            } else {
                sum[i] = sum[i - 1] + arr[i].first;
                nxt[i] = i;
                while (nxt[i] + 1 <= n && sum[i] >= arr[nxt[i] + 1].first) {
                    nxt[i]++;
                    sum[i] += arr[nxt[i]].first;
                }
            }
            ans[arr[i].second] = nxt[i];
        }

        for (int i = 1; i <= n; i++) {
            cout << ans[i] - 1 << " ";
        }
        cout << endl;
    }
    return 0;
}
