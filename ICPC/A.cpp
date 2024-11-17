#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1000000007;




int solve() {
    IOS
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n >> k;
        ll arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr,arr+n);
        ll sum = 0;
        for(int i = 0; i < n; i++) {

            if(i < k) {
                sum += arr[i];
                cout << sum << " ";
            }
            else {
                ll iteam = i / k;
                int low = 0;
                int high = i;
                ll sum = 0;
                while(low < high) {
                    sum += high;
                    high--;
                    for(int o = 1; o < k;o++) {
                        sum += low;
                        low++;
                    }
                }
            }
        }
        cout << '\n';
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
