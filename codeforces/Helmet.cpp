#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {

        int n , p;
        cin >> n >> p;
        
        vector < int > crr(n);
        vector < int > brr(n);
        
        for(int i = 0; i < n; i++) {
           cin >> crr[i];
        }
        for(int i = 0; i < n; i++) {
            cin >> brr[i];
        }
        
        vector < pair < int, int > > arr(n);
        for(int i = 0; i < n; i++) {
            arr[i].first = brr[i];
            arr[i].second = crr[i];
        }

        sort(arr.begin(), arr.end());

        int prsn = 1;
        ll cost = p;
        for(int i = 0; i < n; i++) {
            if(arr[i].first > p) {
                cost += (n - prsn) * p;
                break;
            }
            else {
                if(arr[i].second + prsn <= n) {
                    cost += (arr[i].first * arr[i].second);
                    prsn += arr[i].second;
                }
                else {
                    cost += (arr[i].first * (n - prsn));
                    break;
                }
            }
        }
        cout << cost << '\n';
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
