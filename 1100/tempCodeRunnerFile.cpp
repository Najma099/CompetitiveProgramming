#include<iostream>
using namespace std;

int solve() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        int ope = 0;

        while (x > y) {
            if (x % 3 == 0 && x / 3 >= y) {
                x /= 3;
            } else if (x % 2 == 0 && x / 2 >= y) {
                x /= 2;
            } else {
                x--;
            }
            ope++;
        }
        cout << ope << endl;
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
