#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long a, cost = 0, neg = 0, zero = 0;
    
    for (int i = 0; i < n; ++i) {
        cin >> a;
        if (a == 0) {
            zero++;
            cost++;
        } else if (a > 0) {
            cost += a - 1;
        } else {
            cost += -1 - a;
            neg++;
        }
    }
    
    if (neg % 2 != 0 && zero == 0) {
        cost += 2;
    }

    cout << cost << endl;
    return 0;
}
