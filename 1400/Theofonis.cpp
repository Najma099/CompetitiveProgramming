#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int T = 0; T < t; T++){
        int n ;
        cin >> n;
        vector <long long> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        vector <long long> suffix(n);
        suffix[n - 1] = arr[n - 1];
        for(int i = n - 2; i >= 0; i--) {
            suffix[i] = suffix[i + 1] + arr[i];
        } 

        long long ans = suffix[0];
        for(int i = 1; i < n; i++) {
            if(suffix[i] > 0) {
                ans += suffix[i];
            }
        }
        cout << ans << '\n';
    }
}