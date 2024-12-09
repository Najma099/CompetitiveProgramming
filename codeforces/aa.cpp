#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int two = 0;
        int three = 0;
        int sum = 0;
        for(int i = 0; i < s.size(); i++) {
            sum += (s[i] - '0'); 
            if(a[i] == '2')
                two++;
            else if(a[i] == '3')
                three++;
        }
        int a = 9 - (sum % 9);
        if(a == 0 || a == 9)
            cout << "YES" <<'\n';
        else if(a == 2 && two >= 1)
            cout << "YES" <<'\n';
        else if(a == 4 && two >= 2)   
           cout << "YES" <<'\n';
        else if(a == 8 &&(three >= 1 || two >= 3))
            cout << "YES" <<'\n';
        else    
            cout << "NO" << '\n';
     }
    return 0;
}

int main() {
    solve();
    return 0;
}
