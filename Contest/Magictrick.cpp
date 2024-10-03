#include<iostream>
#include<vector>
using namespace std;

int solve () {
    int n;
    cin >> n;
    string opr[n];
    int oprr[n];
    for(int i = 0; i < n; i++) {
        cin >> opr[i] >> oprr[i];
    }

    int valid = 0;
    for(int num = 1; num <= 100; num++) {

        int curr = num;
        bool isvalid = true;

        for(int i = 0; i < n; i++) {
            if(opr[i] == "ADD") {
                curr += oprr[i];
            } 
            else if(opr[i] == "SUBTRACT") {
                if(curr - oprr[i] < 0) {
                    isvalid = false;
                    break;
                }
                curr -= oprr[i];
            } 
            else if(opr[i] == "MULTIPLY") {
                curr *= oprr[i];
            } 
            else if(opr[i] == "DIVIDE") {
                if(curr % oprr[i] != 0) {
                    isvalid = false;
                    break;
                }
                curr /= oprr[i];
            }
        }

        if(!isvalid) {
            valid++;
        }
    }
  
    cout << valid << endl;
    return 0;
}

int main() {
    solve();
    return 0;
}
