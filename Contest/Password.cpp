#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool ask(const string &s) {
    cout << "? " << s << endl;
    int res;
    cin >> res;
    return res == 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string s = "";
        bool found = false;

        while (n > 0) {
            if (!found) {
                if (ask(s + "0")) {
                    s += "0";
                    n--;
                } else {
                    if (ask(s + "1")) {
                        s += "1";
                        n--;
                    } else {
                        found = true;
                    }
                }
            } else {
                if (ask("0" + s)) {
                    s = "0" + s;
                    n--;
                } else {
                    s = "1" + s;
                    n--;
                }
            }
        }

        cout << "! " << s << endl;
        cout.flush();
    }
    return 0;
}
