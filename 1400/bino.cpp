#include <iostream>
#include <vector>
using namespace std;
const long long MOD = 1e9 + 7;

int main() {
    long long t;
    cin >> t;

    vector<long long> n(t), k(t);
    for (long long i = 0; i < t; ++i) {
        cin >> n[i];
    }
    for (long long i = 0; i < t; ++i) {
        cin >> k[i];
    }

    for (long long i = 0; i < t; i++) {
        long long x = 2;
        long long p = k[i];
        long long res = 1;

        while (p) {
            if (p & 1) {
                res = (res * x) % MOD;
            }
            x = (x * x) % MOD;
            p >>= 1;;
        }

        cout << res << endl;
    }

    return 0;
}
