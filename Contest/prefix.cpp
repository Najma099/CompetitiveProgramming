#include <iostream>
#include <vector>
#include <map>
using namespace std;

int solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        map<long long, int> prefs;
        long long pref = 0;
        int count = 0;

        prefs[0] = 1;

        for (int i = 0; i < n; ++i) {
            pref += a[i];

            if (prefs[pref] > 0) {
                count++;
                prefs.clear();
                prefs[0] = 1;
                pref = 0;
            } else {
                prefs[pref]++;
            }
        }

        cout << count << '\n';
    }

    return 0;
}

int main() {
    solve();
    return 0;
}
