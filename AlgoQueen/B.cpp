#include<bits/stdc++.h>
#include<cmath>
#include<iomanip>
using namespace std;

#define ll long long
const double EPS = 1e-6;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
     int n;
    double w, h;
 
    cin >> n >> h >> w;
    
    vector < vector < double>> dangerZ (n, vector < double > (3));
    for(int i = 0; i < n; i++) {
        cin >> dangerZ[i][0] >> dangerZ[i][1] >> dangerZ[i][2];
    }
    
    vector < pair < double, double >> blocked;
    for(int i = 0; i < n; i++) {
        double c = dangerZ[i][1];
        double r = dangerZ[i][2];
        
        double bottom = max(0.0, c - r);
        double top = min(h, c + r);
        
        blocked.push_back({bottom, top});
    }
    
    sort(blocked.begin(), blocked.end());
    
    vector < pair < double, double >> merged;
    for(int i = 0; i < blocked.size(); i++) {
        if(i == 0) {
            merged.push_back(blocked[0]);
        }
        else {
            pair < double, double > & last = merged.back();
            if(blocked[i].first <= last.second) {
                last.second = max(last.second, blocked[i].second);
            }
            else {
                merged.push_back(blocked[i]);
            }
        }
    };
    
    double blockedH = 0.0;
    for(int i = 0; i < merged.size(); i++) {
        blockedH += merged[i].second - merged[i].first;
    }
    
    if(blockedH < h) cout << "Yes" << '\n';
    else  cout << "No" << '\n';
    return 0;
}