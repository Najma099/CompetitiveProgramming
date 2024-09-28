#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<pair<long long, int>> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i + 1;
    }

    sort(a.begin(), a.end());

    for(int i = 0; i < n; i++) {
        long long x2 = x - a[i].first;
        for(int j = i + 1, k = n - 1; j < k; j++) {
            while(j < k && a[j].first + a[k].first > x2)
                k--;
            if(j < k && a[j].first + a[k].first == x2) {
                cout << a[i].second << " " << a[j].second << " " << a[k].second << endl;
                return 0;
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}
