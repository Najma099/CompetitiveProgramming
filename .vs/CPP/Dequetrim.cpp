#include <iostream>
#include <vector>
using namespace std;

int main() {

    int t;
    cin >> t;

    for(int u = 0; u < t; u++) {
        int n, s;
        cin >> n >> s;

        vector < int > arr (n);
        int prefix = 0;

        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            prefix += arr[i];
        }

        if(prefix < s){
            cout << -1 << endl;
            continue;
        }
        else if(prefix == 0) {
            cout << 0 << endl;
            continue;
        }

        int j = 0 ,currsum = 0, maxL = 0;
        for(int i = 0; i < n; i++) {
            currsum += arr[i];

            if(currsum > s) {
                currsum -= arr[j];
                j++;
            }

            if (currsum == s) maxL = max(maxL, i - j + 1);

        }
       
        cout << n - maxL << endl;


    }

    return 0;
}