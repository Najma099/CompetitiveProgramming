#include<iostream>
#include<vector>
#include <map>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector <int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long prefix = 0; 
    long long count = 0;

    map<int,int> mp;
    mp[0] = 1;

    for(int i = 0; i < n; i ++) {
        prefix += arr[i];
        int mod = prefix % n;
        if (mod < 0) mod += n;
        if(mp[mod] >= 1)
            count += mp[mod];
        mp[mod]++;
    }

    cout << count << '\n';
    
}