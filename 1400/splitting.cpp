#include<iostream>
#include<vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector <long long> arr(N);
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    long long x, f;
    cin >> x >> f;
    long long sum = 0;

    for(int i = 0; i < N; i++) {
        if(arr[i] > x) {
            sum += (arr[i] - x) / (x + f);
            if((arr[i] - x) % (x + f ) != 0 || (arr[i] - x) < (x + f ) ){
                sum += 1;
            }
        }
    }
    cout << sum * f << '\n';
    return 0;
}