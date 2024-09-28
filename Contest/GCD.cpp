#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    if(b == 0) return a;
	return gcd(b, a % b);
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        sort(a.begin(), a.end());
        int sum = a[0];
        int curr = a[0];
        
        for (int i = 1; i < n; ++i) {
            curr = gcd(curr, a[i]);
            sum += curr;
        }
        
        cout << sum << endl;
    }
    
    return 0;
}
