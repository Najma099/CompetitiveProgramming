#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> c(n);

    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    set<int> s;
    s.insert(0);

    for (int coin : c) {
        set<int> ns;
        for (int sum : s) {
            ns.insert(sum + coin);
        }
        s.insert(ns.begin(), ns.end());
    }

    s.erase(0);

    cout << s.size() << endl;
    for (int sum : s) {
        cout << sum << " ";
    }
    cout << endl;

    return 0;
}
