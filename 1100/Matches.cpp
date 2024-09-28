#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<pair<int, int> > arr(m);
    for (int i = 0; i < m; i++) {
        cin >> arr[i].first >> arr[i].second;
    }

    sort(arr.begin(), arr.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second > b.second;
    });

    int count = 0;
    int sum = 0;
    
    for (int i = 0; i < m; i++) {
        if (count + arr[i].first <= n) {
            count += arr[i].first;
            sum += arr[i].first * arr[i].second;
        }
        else if (count < n) {
            int a = n - count;
            sum += a * arr[i].second;
            break;
        }
    }

    cout << sum << '\n';
    return 0;
}
