#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int solve() {
    int n, m;
    cin >> n >> m;

    multiset<ll> tickets;
    for (int i = 0; i < n; i++) {
        ll price;
        cin >> price;
        tickets.insert(price);
    }

    for (int i = 0; i < m; i++) {
        ll max_price;
        cin >> max_price;

        auto it = tickets.upper_bound(max_price); 
        if (it == tickets.begin()) {
            cout << -1 << " "; 
        } else {
            --it; 
            cout << *it << " ";
            tickets.erase(it);
        }
    }

    return 0;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
