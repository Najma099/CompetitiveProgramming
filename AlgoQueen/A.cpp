#include<bits/stdc++.h>
#include<cmath>
#include<iomanip>
using namespace std;

#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    double r1;
    cin >> r1;

    while(t--){
        
        double r2, Px, Py, Tx, Ty;
        cin >> r2 >> Px >> Py >> Tx >> Ty;
      
      
        double dx = Px - Tx;
        double dy = Py - Ty;
        
        double dd = dx* dx + dy * dy;
       if(dd <= r1 * r2 ) {
        cout << "True" << '\n';
       }
       else {
         cout << "False" << '\n';
       }
    }
    
    return 0;
}