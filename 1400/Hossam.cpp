#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int m, n;
        cin >> n >> m;
        vector<bool> check(n + 1,0);
        vector<pair<int,int> > arr(m);
        for(int i = 0; i < m; i++) {
            int a,b;
            cin >> a >> b;
            if(a > b) {
                int temp = b;
                b = a;
                a = temp;
                check[a] = 1;
            }
            arr[i].first = a;
            arr[i].second = b;
        }

        int ans = n;
        int point = 0;
        for(int i = 1; i <= n; i++) {
            if(check[i]) {
                int dis = arr[point].second;
                point++;
                int j = i + 1;
                while(j < dis) {
                    if(check[j]) {
                        dis = 
                    }
                }
            }
        }

    }
    return 0;
}
