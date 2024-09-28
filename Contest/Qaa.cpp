#include <iostream>
#include <vector>
using namespace std;
int main () {
    int t;
    cin >> t;
    while(t--) {
        int n , k;
        cin >> n >> k;
        bool flag = false;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int count = 0;
        int ans = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i] >= k) {
                flag = true;
                count += arr[i];
            }
            if(flag && arr[i] == 0 ) {
                if(count != 0) {
                    ans++;
                    count--;
                }
                    
            }
        }
        cout << ans <<'\n';
    }
    return 0;
}