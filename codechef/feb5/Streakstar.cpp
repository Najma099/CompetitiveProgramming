#include <bits/stdc++.h>
using namespace std;

int getMaxStreak(vector<int>& arr) {
    int n = arr.size();
    int maxStreak = 1, currStreak = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] >= arr[i - 1]) {
            currStreak++;
        } else {
            currStreak = 1;
        }
        maxStreak = max(maxStreak, currStreak);
    }
    return maxStreak;
}

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxStreak = getMaxStreak(arr);  
    for (int i = 0; i < n; i++) {
        int original = arr[i];
        arr[i] *= x;  

        maxStreak = max(maxStreak, getMaxStreak(arr));

        arr[i] = original; 
    }

    cout << maxStreak << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
