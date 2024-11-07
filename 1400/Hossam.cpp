#include <iostream>
#include <vector>
#include <set>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        
        vector<bool> check(n + 1, false);
        multiset<pair<int, int>> arr;
        
        for(int i = 0; i < m; i++) {
            int a, b;
            cin >> a >> b;
            if(a > b) swap(a, b);
            check[a] = true;
            arr.insert({a, b});
        }
        
        int ans = n;
        auto point = arr.begin();
        int conti = 0;
        
        for(int i = 1; i <= n; i++) {
            if(check[i]) {
                conti = 0;
                int dis = point->second;
                
                // Check if point is at the end before incrementing
                if (point != arr.end()) {
                    ++point; 
                }
                
                int j = i + 1;
                bool flag = false;
                
                while(j < dis) {
                    if(check[j]) {
                        dis = min(dis, point->second);
                        if (point != arr.end()) {
                            ++point;
                        }
                    }
                    j++;
                    flag = true;
                }
 
                if(flag) {
                    ans++;
                    i = j;
                    continue;
                }
            } else {
                conti++;
            }
        }
        
        if(conti > 1)
            ans++;
        
        cout << ans << '\n';
    }
    return 0;
}
