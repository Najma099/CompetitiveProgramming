#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int solve() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {

        int n; 
        cin >> n; 
        vector<int> arr(n); 
        map<int, int> mp; 
         
        for (int i = 0; i < n; i++) { 
            cin >> arr[i]; 
            mp[arr[i]]++; 
        } 
         
        int ans = 0; 
        for (auto it = mp.begin(); it != mp.end(); it++) { 
            if (it->second == 1) 
                ans++; 
        } 
         
        ans = ((ans + 1) / 2) * 2 + mp.size() - ans; 

        cout << ans << '\n';
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
