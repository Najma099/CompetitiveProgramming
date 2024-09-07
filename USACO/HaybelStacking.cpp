#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    freopen("stacking.in", "r", stdin);
	// the following line creates/overwrites the output file
	freopen("stacking.out", "w", stdout);

    int n, k;
    cin >> n >> k;

    vector<int> arr(n + 1, 0);

    for (int i = 0; i < k; i++) {
        int idx1, idx2; 
        cin >> idx1 >> idx2;
        idx2++;
        arr[idx1]++;
        arr[idx2]--;
    }

    vector<int> prefix(n + 1, 0);
    
    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    sort(prefix.begin(), prefix.end());

    cout << prefix[n / 2] << "\n";
    
    return 0;
}
