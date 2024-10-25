#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool compare(const pair<int, int>& a, const pair<int, int>& b) {
    return a.second > b.second;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    map<int, int> freq;
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    vector<pair<int, int> > frv(freq.begin(), freq.end());
    sort(frv.begin(), frv.end(), compare);

    vector<int> t;
    for (int i = 0; i < frv.size() && t.size() < k; i++) {
        int value = frv[i].first;
        int count = frv[i].second;

        for (int j = 0; j < min(count, (int)(k - t.size())); j++) {
            t.push_back(value);
        }
    }

    while (t.size() < k) {
        t.push_back(frv[0].first);
    }

    for (int i = 0; i < k; i++) {
        cout << t[i] << " ";
    }
    cout << endl;

    return 0;
}
