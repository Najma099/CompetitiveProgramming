#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    long long x;
    cin >> n >> x;

    vector <int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];


    long long prefix = 0;
    long long count = 0;
    map<long long, int> pct;
    pct[0] = 1;

    for (int i = 0; i < n; i++) {
        prefix += arr[i];
        count += pct[prefix - x];
        pct[prefix]++;
    }

    cout << count << '\n';

    return 0;
}
