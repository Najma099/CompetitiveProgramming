#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1000000007;

bool check(ll arr[], int n,int k, ll mid) {
    int count = 1;
    ll sum = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] > mid) return 0;
        if(arr[i] + sum <= mid) {
            sum += arr[i];
        }
        else {
            sum = arr[i];
            count++;
        }
    }

    if(count <= k)
        return 1;
    else
        return 0;
}

int solve() {
    IOS
    int t;
    cin >> t;
    while (t--) {
        int n , k;
        cin >> n >> k;
        ll arr[n];
        ll low = 0;
        ll high = 0;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            low = max(low,arr[i]);
            high += arr[i];
        }
        ll ans = 0; 
        while(low <= high) {
            ll mid = low + (high - low)/2;
            if(check(arr,n,k,mid)){
                ans = mid;
                high = mid - 1;
            }
            else 
                low = mid + 1;
        }
        cout << ans << '\n';
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
