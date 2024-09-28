#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<int> arr(n);

        for(int j = 0; j < n; j++)
            cin >> arr[j];

        sort(arr.begin(), arr.end());

        long long sum = 0; 
        int current = 1;

        for(int j = 0; j < n; j++) {
            if(arr[j] >= current) {
                sum += (long long)(arr[j] - current);
                current++;
            }
        }

        cout << sum << '\n';
    }
    return 0;
}
