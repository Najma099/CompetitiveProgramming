#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1000000007;

void solve() {
    IOS
    int n;
    cin >> n;
       unordered_set<int> us;
       ll arr[n];
       for(int i = 0; i < n; i++) {
            cin >> arr[i];
            us.insert(arr[i]);
       } 
    cout << us.size();
}

int main() {
    solve();
    return 0;
}
