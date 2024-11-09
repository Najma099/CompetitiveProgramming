#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int min_price = INT_MAX;
        for(int i = 0; i < s.length(); i++){
            string temp = s;
            temp.erase(i, 1);
            min_price = min(min_price, stoi(temp));
        }
        cout << min_price << endl;
    }
    return 0;
}