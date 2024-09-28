#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long st = max(1LL, n - k + 1);
        long long sum = (n * (n + 1)) / 2 - (st * (st - 1)) / 2;
        if (sum % 2 == 0) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}
