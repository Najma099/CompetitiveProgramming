#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
       
        for(int i = 1; i < n - 1; i++) {
            if(arr[i] < arr[i - 1]) {
                int dx = arr[i - 1] - arr[i];
                arr[i] += dx;
                arr[i + 1] += dx;
            }
        }

        for(int i = n - 2; i > 0; i-- ) {
            if(arr[i] > arr[i + 1] ) {
                int dx = arr[i] - arr[i + 1];
                arr[i] -= dx;
                arr[i - 1] -= dx;
            }
        }
        bool flag = false;
        if(is_sorted(arr.begin(),arr.end())){
            flag = true;
        }

        if(flag)
            cout << "YES" << '\n';
        else 
            cout << "NO" << '\n';

    }
    

    return 0;
}