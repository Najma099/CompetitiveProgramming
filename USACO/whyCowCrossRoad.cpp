#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int main() {
    freopen("maxcross.in", "r", stdin);
	// the following line creates/overwrites the output file
	freopen("maxcross.out", "w", stdout);

    int n, k, b;
    cin >> n >> k >> b;

    vector<bool> arr(n + 1, false);
    for (int i = 0; i < b; i++) {
        int idx;
        cin >> idx;
        arr[idx] = true;
    }

    vector<int> prefix(n + 1);
    prefix[0] = 0;

    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1];
        if (arr[i]) 
            prefix[i]++;
    }

    int low = 1;
    int high = k;
    int brlight = numeric_limits<int>::max();

    while (high <= n) {
        int dis = prefix[high] - prefix[low - 1];
        brlight = min(brlight, dis);
        low++;
        high++;
    }

    cout << brlight << '\n';
    return 0;
}
