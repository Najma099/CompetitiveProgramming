#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

string join(const vector<string>& v, const string& d) {
    string r;
    for (size_t i = 0; i < v.size(); ++i) {
        r += v[i];
        if (i < v.size() - 1) {
            r += d;
        }
    }
    return r;
}

string process(int n, int q, vector<int>& p, vector<int>& k) {
    unordered_map<int, int> c;

    for (int i = 1; i <= n; ++i) {
        int kp = (i - 1) * (n - i + 1) + (n - i);
        c[kp]++;
        if (i < n) {
            int g = p[i] - p[i - 1] - 1;
            if (g > 0) {
                int kb = i * (n - i);
                c[kb] += g;
            }
        }
    }

    vector<string> ans;
    for (int j = 0; j < q; ++j) {
        ans.push_back(to_string(c[k[j]]));
    }

    return join(ans, " ");
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<int> p(n), k(q);
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
        }
        for (int i = 0; i < q; ++i) {
            cin >> k[i];
        }

        cout << process(n, q, p, k) << endl;
    }

    return 0;
}
