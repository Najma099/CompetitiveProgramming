#include<iostream>
#include<vector>
#include<set>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> price(n), a(n), b(n);
    
    for(int i = 0; i < n; i++) {
        cin >> price[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    set<pair<int, int> > aa, bb, cc;
    for(int i = 0; i < n; i++) {
        if(a[i] != b[i]) {
            if(a[i] == 1) {
                aa.insert({price[i], b[i]});
            }
            else if(a[i] == 2) {
                bb.insert({price[i], b[i]});
            }
            else if(a[i] == 3) {
                cc.insert({price[i], b[i]});
            }

            if(b[i] == 1) {
                aa.insert({price[i], a[i]});
            }
            else if(b[i] == 2) {
                bb.insert({price[i], a[i]});
            }
            else if(b[i] == 3) {
                cc.insert({price[i], a[i]});
            }

        } else {
            if(a[i] == 1) {
                aa.insert({price[i], 0});
            }
            else if(a[i] == 2) {
                bb.insert({price[i], 0});
            }
            else if(a[i] == 3) {
                cc.insert({price[i], 0});
            }
        }
    }

    int m;
    cin >> m;
    for(int i = 0; i < m; i++) {
        int y;
        cin >> y;
        int ans = -1;
        int idx = 0;
        if(y == 1) {
            if(!aa.empty()) {
                ans = (aa.begin())->first;
                idx = (aa.begin())->second;
                cout << ans << '\n';
                aa.erase(aa.begin());
            } else {
                cout << "-1" << " ";
            }
        }
        else if(y == 2) {
            if(!bb.empty()) {
                ans = (bb.begin())->first;
                idx = (bb.begin())->second;
                cout << ans << '\n';
                bb.erase(bb.begin());
            } else {
                cout << "-1" << " ";
            }
            
        } 
        else {
            if(!cc.empty()) {
                ans = (cc.begin())->first;
                idx = (cc.begin())->second;
                cout << ans << '\n';
                cc.erase(cc.begin());
            } else {
                cout << "-1" << " ";
            }
        }

        if(idx == 1) {
            aa.erase({ans, y});
        } else if(idx == 2) {
            bb.erase({ans, y});
        } else if(idx == 3) {
            cc.erase({ans, y});
        }
    }
}

int main() {
    solve();
    return 0;
}