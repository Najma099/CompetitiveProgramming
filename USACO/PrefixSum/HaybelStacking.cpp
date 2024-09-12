#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n + 2, 0);

    for (int i = 0; i < k; i++) {
        int idx1, idx2; 
        cin >> idx1 >> idx2;
        arr[idx1]++;
        arr[idx2 + 1]--;
    }

    vector<int> prefix(n + 1, 0);
    
    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    sort(prefix.begin() + 1, prefix.end());

    cout << prefix[(n + 1) / 2] << "\n";
    
    return 0;
}
