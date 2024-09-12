#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n;
    cin >> n;
    long long t;
    cin >> t;

    vector<long long> arrr(n);
    for (int i = 0; i < n; i++) {
        cin >> arrr[i];
    }

    long long low = 0, high = 0;
    long long sum = 0, maxL = 0;

    while (high < n) {
        if (sum + arrr[high] <= t) {
            sum += arrr[high];
            maxL = max(maxL, high - low + 1);
            high++;
        } else {
            sum -= arrr[low];
            low++;
        }
    }

    cout << maxL;
    return 0;
}
