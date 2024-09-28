#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int energy = 0;
    int coins = arr[0];

    for (int i = 0; i < n - 1; i++) {
        int num = arr[i] - arr[i + 1];
        if (num < 0) {
            if (energy + num >= 0) {
                energy += num;
            } else {
                coins += arr[i + 1] - (arr[i] + energy);
                energy = 0;
            }
        } else {
            energy += num;
        }
    }

    cout << coins << '\n';
    return 0;
}
