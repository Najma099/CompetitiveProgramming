#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m, k;
        cin >> n >> m >> k;

        string s;
        cin >> s;

        int water = 0;
        int waterT = 0;
        int croc = 0;
        int log1 = -1;
        bool flag = true;

        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'L') {
                log1 = i;
                if(croc > 0) {
                    if(croc + water > k) {
                        flag = false;
                        break;
                    }
                } else {
                    if(water > m + k) {
                        flag = false;
                        break;
                    }
                }
                water = 0;
                croc = 0;
            } else if(s[i] == 'C') {
                croc++;
            } else if(s[i] == 'W') {
                water++;
            }

            if(water > k) {
                flag = false;
                break;
            }
        }

        if(flag) {
            if(croc > 0) {
                if(croc + water > k) {
                    flag = false;
                }
            } else {
                if(water > m + k) {
                    flag = false;
                }
            }
        }

        if(flag) 
            cout << "YES" << '\n';
        else 
            cout << "NO" << '\n';
    }
}
