#include <iostream>
#include <string>
using namespace std;

int main() {
    string t;
    cin >> t;
    int n = t.length();
    
    for (int k = 1; k <= n / 2; ++k) {
        string s = t.substr(0, k);
        string expected = s + s.substr(0, k - 1); // Generate the string with overlap
        
        if (expected == t) {
            cout << "YES" << '\n';
            cout << s << '\n';
            return 0;
        }
    }
    
    cout << "NO" << '\n';
    return 0;
}
