#include <iostream>
#include <unordered_map>
using namespace std;

int max_dis(long long arr[], int n) {

    unordered_map<long long, int> mp;
    int maxD = 0;
    
    for (int i = 0; i < n; i++) {
        long long elem = arr[i];
        if (mp.find(elem) != mp.end()) {
            int dist = i - mp[elem];
            if (dist > maxD) {
                maxD = dist;
            }
        } 
        else {
            mp[elem] = i;
        }
    }
    return maxD;
}

int main() {
    freopen("div7.in", "r", stdin);
	// the following line creates/overwrites the output file
	freopen("div7.out", "w", stdout);

    int N;
    cin >> N;

    int arr[N];
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    long long prefix[N + 1];
    prefix[0] = 0;

    for(int i = 1; i <= N; i++) {
        prefix[i] = arr[i - 1];
        prefix[i] += prefix[i - 1];
    }

    for(int i = 1; i <= N; i++) {
        prefix[i] = prefix[i] % 7;
    }

    cout << max_dis(prefix, N + 1) ;

    return 0;
}
