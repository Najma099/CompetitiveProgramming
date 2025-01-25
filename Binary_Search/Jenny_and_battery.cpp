#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int n;
ll K;
vector<vector<int> > arr;

bool check(ll mid) {
    vector < pair < int , int > > canhold;
    ll cost_disp = 0;
    ll disp = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i][0] > mid) {
            disp += arr[i][0] - mid;
            cost_disp += (arr[i][0] - mid) * arr[i][1];
        }
        else if(arr[i][0] < mid) {
            canhold.push_back({arr[i][2],mid - arr[i][0]});
        }
    }

    sort(canhold.begin(),canhold.end());

    for(int i = 0; i < canhold.size(); i++) {

        if(disp == 0) break;

        if(disp > canhold[i].second) {
            disp -= canhold[i].second;
            cost_disp += canhold[i].second * canhold[i].first;
        }
        else if(disp <= canhold[i].second ) {
            cost_disp += (disp * canhold[i].first);
            disp = 0;
        }
    }

    if(disp == 0 && cost_disp <= K)
        return true;
    else
        return false;
}

int solve() {
    IOS
    int t;
    t = 1;
    while (t--) {
        cin >> n >> K;
        arr.resize(n, vector<int>(3));
        int low = 1e9;
        int high = -1e9;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 3; j++) {
                cin >> arr[i][j];
                low = min(low, arr[i][j]);
                high = max(high, arr[i][j]);
            }
        }

        sort(arr.begin(), arr.end());

        int ans = high;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (check(mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

int main() {
    solve();
    return 0;
}