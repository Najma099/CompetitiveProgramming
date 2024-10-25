#include <iostream>
#include <vector>
#include <set>
#include <string>
using namespace std;

int solve() {
    int t;
    cin >> t;
    vector<multiset<string> > aa(5);

    while (t--) {
        string a, b;
        cin >> a >> b;

        int aA = a.size();
        int bB = b.size();

        aa[aA].insert(a);
        aa[bB].insert(b);
    }

    int ans = 0;
    for (int i = 0; i < 5; i++) {
        auto j = aa[i].begin();
        while (j != aa[i].end()) {
            auto next = std::next(j);
            if (next != aa[i].end()) {
                if (*j != *next) {
                    ans++;
                }
            }
            j = std::next(j, 2);
        }
    }

    cout << ans << '\n';
    return 0;
}

int main() {
    solve();
    return 0;
}
