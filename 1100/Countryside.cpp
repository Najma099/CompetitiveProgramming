#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    int n;
    cin >> n;

    vector <int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxx = 0;
    for(int i = 0; i < n; ++i) {

        int count = 1;  
       
        for (int j = i - 1; j >= 0; j--) {

            if (arr[j] <= arr[j + 1]) {
                count++;
            } 
            else 
                break;
        }
        
        for(int j = i + 1; j < n; j++) {

            if(arr[j] <= arr[j - 1]) {
                count++;
            } 
            else 
                break;
        }
        maxx = max(maxx, count);
    }
    cout << maxx << '\n';
    return 0;
}