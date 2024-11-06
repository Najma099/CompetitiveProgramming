#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const long long MOD = 1000000007;

int N;
vector <int> a,b,c;

int solve() {
    IOS
    int t;
    t = 1;
    while (t--) {
        cin >> N;
        a.resize(N);
        b.resize(N);
        c.resize(N);
        memeset(dp,-1,sizeof(dp));
        for(int i = 0; i < N; i++) {
            cin >> a[i] >> b[i] >> c[i];
        }
    }
    return 0;
}

int main() {
    solve();
    return 0;
    
}
