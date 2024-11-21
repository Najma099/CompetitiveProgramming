#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    ll x;
    cin >> n >> x;
    ll arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int count = 0;
    int i = 0;
    int j = n - 1;
    while(i <= j) {
        if(arr[i] + arr[j] <= x) {
            i++;
        }
        j--;
        count++;
    }

    cout << count << '\n';
    return 0;
}

int main() {
    solve();
    return 0;
}
