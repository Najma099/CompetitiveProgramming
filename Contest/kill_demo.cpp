#include <iostream>
#include <algorithm>
using namespace std;

const int M = 1e9 + 7;

long long rec(int i, int j, int n) {
    if (i == n && j == n) 
        return i * j;
    else if (i == n) 
        return (i * j + rec(i, j + 1, n)) % M;
    else if (j == n) 
        return (i * j + rec(i + 1, j, n)) % M;
    else
        return (i * j + max(rec(i, j + 1, n), rec(i + 1, j, n))) % M;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long res = rec(1, 1, n);
        res = (res * 2022) % M;
        cout << res << '\n';
    }
}

int main() {
    solve();
    return 0;
}
