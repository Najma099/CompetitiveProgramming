#include <iostream>
#include<vector>
#include <functional>
#include <algorithm>
using namespace std;

int main() {

    const int MOD = 1e9 + 7;
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        vector < long long > arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end(),greater<>());

        vector < long long > brr(n);
        for(int i = 0; i < n; i++) {
            cin >> brr[i];
        }
        sort(arr.begin(),arr.end());

        long long result = 1;
        for(int i = 0; i < n; i++) {
            int count = arr.size() - (upper_bound(arr.begin(), arr.end(), brr[i], greater<int>()) - arr.begin());
            result = result * max(count - i, 0) % MOD;
        }
        cout << result << "\n";
    }
    return 0;
}