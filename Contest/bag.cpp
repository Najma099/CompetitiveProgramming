#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1000000007;

int solve() {
    IOS
    int t = 1;
    while (t--) {
        int n, k; 
        cin >> n >> k;

        vector<int> arr(n);
        unordered_map<int, int> freqMap;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            freqMap[arr[i]]++;
        }

        multiset<int> freqSet;
        for (auto& [num, freq] : freqMap) {
            freqSet.insert(freq);
        }

        int ans = 0;
        for (auto it = freqSet.begin(); it != freqSet.end(); ++it) {
            int freq = *it;
            if (freq > 1) {
                if (freq == k) {
                    ans++;
                }
                if (freqMap.count(k - freq)) {
                    ans++;
                    freqMap[k - freq]--;
                } else {
                    int sum = freq;
                    auto pointer = it;
                    while (sum < k && it != freqSet.end() ) {
                        sum += *pointer;
                        pointer++;
                       // if (pointer == freqSet.end()) break;
                    }
                    ans++;
                }
            }
        }
        cout << ans << "\n"; 
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
