#include <iostream>
#include <vector>
using namespace std;

int main () {
    int n, a;
    cin >> n >> a;
    vector<int> arr(n);
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int count = 0;
    a--; 

    if(arr[a] == 1) {
        count++;
    }

    for(int i = 1; a - i >= 0 || a + i < n; i++) {
        bool l = (a - i >= 0);
        bool r = (a + i < n);
        
        if(l && r) {
            if(arr[a - i] == 1 && arr[a + i] == 1) {
                count += 2;
            }
        }
        else if(l) {
            if(arr[a - i] == 1) {
                count++;
            }
        }
        else if(r) {
            if(arr[a + i] == 1) {
                count++;
            }
        }
    }

    cout << count << '\n';

    return 0;
}
