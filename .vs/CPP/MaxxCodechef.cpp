#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1000000007;

int getmaxx(vector<int>& arr) {
    int n = arr.size();
    int maxSt = 1, currS = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] >= arr[i - 1]) {
            currS++;
        } else {
            currS = 1;
        }
        maxSt = max(maxSt, currS);
    }
    return maxSt;
}

void solve() {
    IOS
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxStreak = getmaxx(arr);  
    for (int i = 0; i < n; i++) {
        int original = arr[i];
        arr[i] *= x;  

        maxStreak = max(maxStreak, getmaxx(arr));

        arr[i] = original; 
    }

    cout << maxStreak << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}