#include<iostream>
#include<vector>
#include<set>
using namespace std;

int solve () {
    int t;
    cin >> t;
    while(t--) {

        long long n , m ,d;
        cin >> n >> m >> d;
        vector <long long> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        multiset <long long> ss;
        long long ans = 0;
        long long prev = 0;

        for(int i = 0; i < n; i++) {
            long long curr = prev + arr[i] - d * (i + 1);
            ans = max(ans,curr);

            if(arr[i] > 0) {
                ss.insert(arr[i]);
                prev += arr[i];
                if(ss.size() > m - 1) {
                    prev -= *ss.begin(); 
                    ss.erase(ss.begin());
                }
            }
        }
        cout <<ans << '\n';
    }
    return 0;
}
int main() {
    solve();
    return 0;
}