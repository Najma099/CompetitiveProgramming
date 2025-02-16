#include <iostream>
#include <vector>
#include <map>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> freq;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }

    int left = -1, right = -1, maxlength = 0;

    for (int i = 0; i < n; i++) {
        if (freq[a[i]] == 1) { 
            int j = i;
            while (j < n && freq[a[j]] == 1) j++;
            if (j - i > maxlength) { 
                left = i + 1;
                right = j;
                maxlength = j - i;
            }
            i = j;
        }
    }

    if (left == -1) cout << "0" << "\n";
    else cout << left << " " << right << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
