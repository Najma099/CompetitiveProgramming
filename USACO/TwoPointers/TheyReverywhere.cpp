#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n ;
    cin >> n;
    map <char,int> mp;
    int count = 0; 

    //just put unique elemt in map and increse the count 
    vector<char> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(mp[arr[i]] == 0) {
            mp[arr[i]]++;
            count++;
        }
    }
    
    //segment which contain all the elemt of mp
    int ans = INT_MAX;
    int dd = 0;
    int left = 0;
    map <char,int> mmp;

    for(int i = 0; i < n; i ++) {
        if(mp[arr[i]] == 0) {
            dd++;
        }
        mp[arr[i]]++;
        while(dd == count) {
            ans = min(i - left + 1, ans);
            mp[arr[left]]--;
            if(mp[arr[left]] == 0)
                dd--;
            left++;
        }
    }

    cout << ans;
    return 0;
}

