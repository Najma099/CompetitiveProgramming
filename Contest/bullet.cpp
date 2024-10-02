#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> bullets(n);
        for (int i = 0; i < n; i++) {
            cin >> bullets[i];
        }

        vector<pair<int, int> > arr(n);
        for (int i = 0; i < n; i++) {
            arr[i].first = bullets[i];
            arr[i].second = i;
        }
        sort(arr.begin(), arr.end());

        int count = 0;
        int lastIdx = -1;
        for (int i = 0; i < n; i++) {
            if (arr[i].second > lastIdx) {
                count++;
                lastIdx = arr[i].second;
            }
        }
        cout << count << endl;
    }
    return 0;
}
