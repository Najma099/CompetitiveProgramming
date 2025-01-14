#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;


int solve() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;

        ll arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        } 

        //find peak
        int low = 0;
        int high = n - 1;
        int peak = 0;
        while(low <= high) {
            int mid = low + (high - low)/2;
            if(arr[mid] > arr[mid - 1]) {
                peak = mid;
                low = mid + 1;
            }
            else
                high = mid - 1;
        }

       
        while(q--) {
            ll k;
            cin >> k;

            //first half
            int low = 0;
            int high = peak;
            vector < ll > result;

            while(low <= high) {
                int mid = low + (high - low)/2;
                if(arr[mid] == k) {
                    result.push_back(mid + 1);
                    break;
                }
                else if(arr[mid] > k)
                    high = mid - 1;
                else
                    low = mid + 1;

            }

            //second half
            low = peak + 1;
            high = n - 1;

            while(low <= high) {
                int mid = low + (high - low)/2;
                if(arr[mid] == k) {
                    result.push_back(mid + 1);
                    break;
                }
                else if(arr[mid] > k)
                    low = mid + 1;
                else 
                    high = mid - 1;
            }

            //print the ans
            for(auto u: result) {
                cout << u << " ";
            }
            cout << '\n';
        }
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
