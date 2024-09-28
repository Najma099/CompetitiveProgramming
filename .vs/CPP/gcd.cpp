#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long gcd(long long a, long long b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main() {

    int n, m;
    cin >> n >> m;

    vector<long long> a(n), b(m);
    for (int i = 0; i < n; ++i) 
        cin >> a[i];
    for (int i = 0; i < m; ++i) 
        cin >> b[i];

    long long g = 0;
    for (int i = 1; i < n; ++i) 
        g = gcd(g, abs(a[i] - a[0]));

    for (int j = 0; j < m; ++j) 
        cout << gcd(g, a[0] + b[j]) << " ";
    

    return 0;
}
