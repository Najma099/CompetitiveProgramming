#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1000000007;


int solve() {
    IOS
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        set<ll> seta,setb;
        ll arr[n];
        ll brr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            seta.insert(arr[i]);
        }
        for(int i = 0; i < n; i++) {
            cin >> brr[i];
            setb.insert(brr[i]);
        }
        if(seta.size() + setb.size() >= 4)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
   
    return 0;
}

int main() {
    solve();
    return 0;
}
