#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int m, n;
        cin >> n >> m;
        vector< pair<int, int> > arr(m);
        vector<int> brr(m);
        
        for(int i = 0; i < m; i++) {
            cin >> arr[i].first >> arr[i].second;
            brr[i] = arr[i].second;
        }
        
        sort(brr.begin(), brr.end());
        sort(arr.begin(), arr.end());
        
        int ans = 0;
        for(int i = 0; i < n; i++) {
            int c = upper_bound(brr.begin(), brr.end(), arr[i].first) - brr.begin();
            ans += c - i;

            if(arr[0].first == i + 1) {
                int d = arr[0].second;
                brr.erase(find(brr.begin(), brr.end(), d));
                arr.erase(arr.begin());
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
