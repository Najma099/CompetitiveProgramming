#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> arr(n);
    vector<int> prefix(n + 1, 0); 
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        prefix[i + 1] = arr[i] + prefix[i];  
    }

    map<int, int> mp;
    int count = 0;
    
    
    for (int i = 0; i <= n; i++) {
        int neededPrefixSum = prefix[i] - x;
        if (mp.find(neededPrefixSum) != mp.end()) {
            count += mp[neededPrefixSum];
        }
        mp[prefix[i]]++; 
    }

    cout << count << endl;
    return 0;
}
