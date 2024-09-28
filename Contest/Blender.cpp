#include <iostream>
#include <vector>
using namespace std;

int main () {
    int t ;
    cin >> t;
    while(t--) {
        long long n, x,y;
        cin >> n >> x >> y;

        if( n == 0){
            cout << 0 << endl;
        }
        else {
            if(x >= y) {
                if ( n % y != 0)
                    cout << n/ y + 1 << '\n';
                else 
                    cout << n/y << '\n';
            }
            else {
                if ( n % x != 0)
                    cout << n / x + 1 << '\n';
                else 
                    cout << n / x << '\n';
            }
                
        }

    }
    return 0;

}