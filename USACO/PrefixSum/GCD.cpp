#include <iostream>
#include <vector>
using namespace std;

int GCD(int a, int b) {
    if(b == 0) return a;
	return GCD(b, a % b);
}

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    vector<int> prefix(n);
    for(int i = 0; i < n;i++) {
        cin >> arr[i];
        if(i) prefix[i] = GCD(prefix[i-1],arr[i]);
        else 
            prefix[i] = arr[i];
    }

    vector <int> suffix(n);
    suffix[n-1] = arr[n - 1];
    for(int i = n - 2; i >= 0; i--) {
        suffix[i] = GCD(suffix[i + 1],arr[i]);
    }

    int maxx = -1;
    int curr = -1;

    for(int i = 0; i < n; i++) {
        
        if(i == 0) {
            curr = suffix[i + 1];
        }
        else if(i >= 1 && i <= n-2) {
            curr = GCD(prefix[i - 1] , suffix[i + 1]);
        }
        else {
            curr = prefix[i - 1];
        }

        if(curr > maxx)
            maxx = curr;
    }

    cout << maxx << '\n';
    return 0;
}
