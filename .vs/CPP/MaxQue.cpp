#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    vector<int> freq(n + 1, 0);

    while (q--) {
        int l, r;
        cin >> l >> r;
        freq[l - 1]++;
        freq[r - 1]--;
    }

    sort(a.begin(), a.end(), greater<int>());
    sort(freq.begin(), freq.end(), greater<int>());

    long long maxSum = 0;
    for (int i = 0; i < n; ++i) {
        maxSum += (long long)a[i] * freq[i];
    }
    
    cout << maxSum << endl;
    
    return 0;

}