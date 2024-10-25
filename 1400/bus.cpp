#include<iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {

        int n, r;
        cin >> n >> r;
        vector < int > arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        } 

        int remprsn = 0;
        int happy = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i] % 2 == 0) {
                happy += arr[i];
            }
            else {
                if(arr[i] != 1) {
                    happy += (arr[i] - 1);
                }
                remprsn++;
            }
        }

        int remseat = r - (happy / 2);
        if((remprsn > remseat)) {
            if(remprsn != remseat * 2)
                happy += (remseat - (remprsn - remseat));
        } 
        else {
            happy += remprsn;
        }
        
        
        cout << happy << '\n';

    }
    return 0;
}