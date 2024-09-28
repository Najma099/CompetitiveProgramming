#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector < int > arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int k = 1;
        int ans = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i] >= k) {
                ans += arr[i] - k;
                k++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}