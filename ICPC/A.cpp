#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--){
        int n, k;
        cin >> n >> k;
        
        vector<ll> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        
        sort(a.begin(), a.end());
        
        vector<ll> pref(n, 0);
        pref[0] = a[0];
        for(int i = 1; i < n; i++) pref[i] = pref[i-1] + a[i];
        
        
        vector<ll> s(n+1, 0);
        vector<ll> mc(n, 0);
        
        for(int m = 1; m <= n; m++){
            if(m >= k + 1){
                s[m] = s[m - k -1] + a[m - k -1];
            }
            mc[m-1] = pref[m-1] - s[m];
        }
    
        for(int i = 0; i < n; i++){
            cout << mc[i] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}