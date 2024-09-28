#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    int count = 0;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int low = 0;
    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += arr[i];

        while(sum > x && low <= i) {
            sum -= arr[low];
            low++;
        }

        if(sum == x) {
            count++;
            sum -= arr[low];
            low++;
        }
    }

    cout << count << endl;
    return 0;
}
