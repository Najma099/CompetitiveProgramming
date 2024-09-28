#include <iostream>
#include <vector>
using namespace std;

int main() {
    
   int t;
   cin >> t;
   while(t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        long long sum = 0;
        for (int i = 0; i < n - 2; i++) {
            sum += a[i];
        }
        
        long long result = a[n-2] - sum;
        result = a[n-1] - result;

        cout << result << endl;
   }
    
    return 0;
}
