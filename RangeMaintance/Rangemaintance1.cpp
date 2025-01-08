#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int countseg(vector<int>& start, vector<int>& end, int Y) {
    // Count the number of segments starting after Y
    int afterY = start.size() - (upper_bound(start.begin(), start.end(), Y) - start.begin());

    // Count the number of segments ending before Y
    int beforeY = lower_bound(end.begin(), end.end(), Y) - end.begin();

    // Segments passing through Y = Total - (afterY + beforeY)
    return (start.size() - (afterY + beforeY));
}

int solve() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    vector<pair<int, int>> ranges = {{1, 5}, {3, 7}, {6, 9}, {8, 11}};
    vector<int> queries = {3, 6, 8};

    vector<int> start, end;
    for (int i = 0; i < ranges.size(); i++) {
        start.push_back(ranges[i].first);
        end.push_back(ranges[i].second);
    }

    // Sort the start and end arrays for binary search
    sort(start.begin(), start.end());
    sort(end.begin(), end.end());

    for (int i = 0; i < queries.size(); i++) {
        cout << countseg(start, end, queries[i]) << '\n';
    }

    return 0;
}

int main() {
    solve();
    return 0;
}
