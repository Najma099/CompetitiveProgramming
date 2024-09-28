#include<iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<char> v(5);
    v[0] = 'a';
    v[1] = 'e';
    v[2] = 'i';
    v[3] = 'o';
    v[4] = 'u';

    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;

        // int repeat = n / 5;
        // int remaining = n % 5;

        if(n <= 5) {
            for(int i = 0; i < n; i++)
                cout << v[i];
        }
        else {
            if(n % 5 == 0){
                int k = n/5;
                for(int i = 0; i < 5; i++) {
                    for(int j = 0; j < k;j++) {
                        cout << v[i];
                    }
                }
            }
            else {
                int k = n / 5;
                int g = n % 5;
                for(int i = 0; i < 5; i++) {
                    if(i < g) {
                            for(int j = 0; j < k + 1;j++) {
                            cout << v[i];
                        }
                    }
                    else {
                        for(int j = 0; j < k;j++) {
                        cout << v[i];
                    }
                    }
                }
            }
        }
        cout << endl;
    }

    return 0;
}
