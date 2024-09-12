#include <iostream>
#include <vector>
using namespace std;

int check(long long quan[],long long price[],long long b, long long ratio[],long long mid) {
    long long t = 0;
    for(int i = 0; i < 3; i++) {
        long long n = quan[i] * mid;
        n -= ratio[i];
        if (n > 0)
            t += n * price[i];
    }
    return t <= b;
}

int main() {
    string s;
    cin >> s;

    long long quan[3];
    for (int i = 0; i < 3; i++) {
        cin >> quan[i];
    }

    long long price[3];
    for(int i = 0; i < 3; i++) {
        cin >> price[i];
    }

    long long b;
    cin >> b;

    long long ratio[3]={0};
    for(char c : s) {
        if(c == 'B') ratio[0]++;
        else if(c == 'S') ratio[1]++;
        else if(c == 'C') ratio[2]++;
    }

    long long low = 0;
    long long high = 10e13;
    long long ans = 0;

    while(low <= high) {
        long long mid = (low + high)/2;
        if(check(quan, price, b, ratio, mid)){
            ans = mid;
            low = mid + 1;
        }
        else 
            high = mid - 1;
    }

    cout << ans << endl;
    return 0;
}