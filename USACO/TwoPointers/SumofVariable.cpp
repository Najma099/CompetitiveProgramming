#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    map<int, int> mp;  

    for(int i = 0; i < n; i++) {
        int com = x - a[i];

        if(mp.find(com) != mp.end()) {
            cout << mp[com] + 1 << " " << i + 1 << endl;
            return 0;
        }

        mp[a[i]] = i;
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}
