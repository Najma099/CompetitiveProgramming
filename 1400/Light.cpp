#include <vector>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n , k;
        cin >> n >> k;
       

        vector<long long > arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long maxx = LLONG_MIN;
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                long long diff = abs(arr[i] - arr[j]);
                if(diff % k == 0) {
                    maxx = max(arr[i],arr[j]);
                }
            }
        }
        cout << maxx << endl;
    }
    return 0;
}