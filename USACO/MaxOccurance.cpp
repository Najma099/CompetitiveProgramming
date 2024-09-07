#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

int findMaxDistance(const vector<int>& arr) {
    unordered_map<int, int> map; 
    int maxDistance = 0;

    // Traverse the array
    for (int i = 0; i < arr.size(); i++) {
        int num = arr[i];

       
        if (map.find(num) != map.end()) {
            int firstOccurrenceIndex = map[num];
            int distance = i - firstOccurrenceIndex;
            maxDistance = max(maxDistance, distance);
        } else {
            map[num] = i;
        }
    }

    return maxDistance;
}

int main() {
    vector<int> arr {0, 1, 2, 0, 1, 0, 3, 4, 6, 1, 0}; // Corrected initializer list
    cout << "Max distance: " << findMaxDistance(arr) << endl;
    return 0;
}
