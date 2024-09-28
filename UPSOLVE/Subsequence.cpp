#include <iostream>
#include <vector>
using namespace std;

int main () {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        vector <int> a(0);
        bool flag = false;
        int count = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '0' && count != '0') {
                a.push_back(count);
                count = 0;
            }
            else if(s[i]== '1'){
                count++;
            }
        }
        if(count != 0)
            a.push_back(count);

        int ans = 0;
        sort(a.begin(),a.end());
        reverse(a.begin(), a.end());
        
        for(int i = 0; i < a.size(); i++) {
            if(i % 2 == 0)
                ans += a[i];
        }
        cout << ans << '\n';
    }
    return 0;
}