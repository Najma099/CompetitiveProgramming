#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Sort the array to ensure minimal mismatches when forming array b
        sort(a.begin(), a.end());

        // Try to create array b by concatenating even-indexed subarrays
        vector<int> b;
        for (int i = k - 1; i < n; i += 2) {  // Start from k-1 and select every second element
            b.push_back(a[i]);
        }

        // Add 0 at the end of array b
        b.push_back(0);

        // Calculate the minimum cost (first mismatch)
        int cost = 0;
        for (int i = 0; i < b.size(); i++) {
            if (b[i] != i + 1) {  // Mismatch found
                cost = i + 1;
                break;
            }
        }

        cout << cost << endl;
    }

    return 0;
}

int main() {
    solve();
    return 0;
}
