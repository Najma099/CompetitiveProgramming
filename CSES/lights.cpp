#include <bits/stdc++.h>
#define ll long long
using namespace std;

int solve() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll x, n, a;
    cin >> x >> n;
    set<ll> s;
    s.insert(0);
    s.insert(x);
    multiset<ll> ms;
    ms.insert(x);
    
    while (n--) {
        cin >> a;
        auto it = s.lower_bound(a);
        auto tt = it;
        tt--;
        
        ms.erase(ms.find(*it - *tt));
        ms.insert(a - *tt);
        ms.insert(*it - a);
        
        cout << *--ms.end() << " ";
        s.insert(a);
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
