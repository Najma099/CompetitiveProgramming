#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > arr(n, vector<int>(m));
        for(int i = 0; i < n; i++ ) {
            for(int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        long long sum = 0;
        for(int j = 0; j < m; j++) {
            vector < int > col(n);
            for(int i = 0; i < n; i++) {
                col[i] = arr[i][j];
            }
            sort(col.begin(),col.end());
            for(int i = 0; i < n; i++) {
                sum += col[i] * (i);
                sum -= col[i] * (n - i - 1);
            }
        }
        cout << sum << '\n';
    }
    return 0;
}
