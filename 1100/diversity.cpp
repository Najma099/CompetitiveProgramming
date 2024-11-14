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
        int N, K;
        cin >> N >> K;
        ll arr[N];
        int uni = 0;
        map<ll, int> mp;
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
            if (mp[arr[i]] >= 1) {
                uni++;
            }
            mp[arr[i]]++;
        }

        if (uni == N || uni <= K) {
            cout << (N * (N - 1)) / 2 << '\n';
        } else {
            vector<int> freqs;
            for (auto& p : mp) {
                freqs.push_back(p.second);
            }

            sort(freqs.begin(), freqs.end());

            for (int i = 0; i < freqs.size(); i++) {
                if (freqs[i] - 1 <= K) {
                    K -= (freqs[i] - 1);
                    freqs[i] = 0;
                    uni++;
                } else {
                    break;
                }
            }

            ll ans = (uni * (uni - 1)) / 2;
            for (int i = 0; i < freqs.size(); i++) {
                if(freqs[i] != 0)
                    ans += N - freqs[i];
            }

            cout << ans << '\n';
        }
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
