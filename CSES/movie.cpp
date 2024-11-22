#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int solve() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<pair<ll, ll>> movies(n);

    
    for (int i = 0; i < n; i++) {
        cin >> movies[i].first >> movies[i].second;
    }

   
    sort(movies.begin(), movies.end(), [](pair<ll, ll> &a, pair<ll, ll> &b) {
        return a.second < b.second;
    });

    int count = 0;
    int lastEndTime = 0;

    
    for (auto &movie : movies) {
        if (movie.first >= lastEndTime) {
            count++;
            lastEndTime = movie.second;
        }
    }

    cout << count << '\n';
    return 0;
}

int main() {
    solve();
    return 0;
}
