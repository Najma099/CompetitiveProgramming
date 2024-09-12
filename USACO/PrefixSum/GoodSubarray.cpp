#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {

    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {

        int n;
        cin >> n;
        string s;
        cin >> s;

        long long pfx = 0;
        long long cnt = 0;
        map<long, long> m;
        m[0] = 1;

        for (int i = 0; i < n; i++) {
            pfx += s[i] - '0';
            cnt += m[pfx - (i + 1)];
            m[pfx - (i + 1)]++;
        }

        cout << cnt << "\n";
    }
    return 0;
}
