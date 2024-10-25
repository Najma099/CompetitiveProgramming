#include <iostream>
#include <map>
using namespace std;

int solve() {
    int q;
    cin >> q;
    while (q--) {
        string s, t, p;
        cin >> s >> t >> p;

        map<char, int> freqS, freqT, freqP;

        for (char c : t) {
            freqT[c]++;
        }
        for (char c : s) {
            freqS[c]++;
        }
        for (char c : p) {
            freqP[c]++;
        }

        bool flag = true;

        for (auto v : freqS) {
            if (freqT.find(v.first) == freqT.end() || freqT[v.first] < v.second) {
                flag = false;
                break;
            }
        }

        
        for (auto &ch : freqT) {
            if (ch.second > freqS[ch.first] + freqP[ch.first]) {
                flag = false;
                break;
            }
        }

        
        int i = 0, j = 0;
        while (i < s.size() && j < t.size()) {
            if (s[i] == t[j]) {
                i++;
            }
            j++;
        }

        if (i != s.size()) {
            flag = false;
        }

        if(flag)
            cout << "YES" << '\n';
        else 
            cout << "NO" << '\n';
    }
    return 0;
}

int main() {
    solve();
    return 0;
}
