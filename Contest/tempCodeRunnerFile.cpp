#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

int solve() {
    string s;
    cin >> s;

    int freq[26] = {0};
    map<char, int> mp;

    for (char c : s) {
        mp[c]++;
        int index = c - 'a';
        freq[index]++;
    }

    int distinctCount = mp.size();

    if (distinctCount > 2) {
        sort(freq, freq + 26);
        int operations = 0;
        int i = 0;
        while (distinctCount > 2) {
            if (freq[i] > 0) {
                operations += freq[i];
                distinctCount--;
            }
            i++;
        }
        cout << operations << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}

int main() {
    solve();
    return 0;
}
