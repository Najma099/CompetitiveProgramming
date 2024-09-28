#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<int> > c(n, vector<int>(m));
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> c[i][j];
        }
    }
    
    int res = 0;
    
    for (int i = 0; i < n; ++i) {
        int mn = *min_element(c[i].begin(), c[i].end());
        res = max(res, mn);
    }
    
    cout << res << endl;

    return 0;
}
