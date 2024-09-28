#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main() {
    freopen("pairup.in", "r", stdin);
	// the following line creates/overwrites the output file
	freopen("pairup.out", "w", stdout);
    int n;
    cin >> n;
    vector<pair<long,long> > arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i].first;
        cin >> arr[i].second;
    }

    // Sorting based on the second element of the pair
    sort(arr.begin(), arr.end(), [](const pair<long, long>& a, const pair<long, long>& b) {
        return a.second < b.second;
    });

    int low = 0;
    int countL = 0;
    int high = n - 1;
    int countH = 0;
    long long ans = 0;

    while(low <= high){
        ans = max(ans, static_cast<long long>(arr[low].second + arr[high].second));

        if(low == high && countL + countH == arr[low].first){
            break;
        }

        if(countL >= arr[low].first) {
            low++;
            countL = 0;
        } else {
            countL++;
        }

        if(countH >= arr[high].first) {
            high--;
            countH = 0;
        } else {
            countH++;
        }
    }

    cout << ans << '\n';
    return 0;
}
