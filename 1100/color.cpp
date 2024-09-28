#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    string s = "ROYGBIV";
    for(int i = 0; i < n / 7; i++) {
        cout << s ;
    }
    string t = "GBIVGBIV";
    for(int i = 0; i < n % 7; i++) {
        cout << t[i];
    }
    cout <<'\n';
}