// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     int n, w;
//     cin >> n >> w;

//     vector<int> a(n), t(n);
//     int min_req = 0;

//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//         t[i] = (a[i] + 1) / 2;
//         min_req += t[i];
//     }

//     if (min_req > w) {
//         cout << -1 << endl;
//         return 0;
//     }

//     w -= min_req;

//     vector<pair<int, int> > c(n);
//     for (int i = 0; i < n; i++) {
//         c[i] = make_pair(a[i], i);
//     }



//     sort(c.begin(), c.end(), greater<pair<int, int> >());

//     for (int i = 0; i < n; i++) {

//         int idx = c[i].second;
//         int max_add = a[idx] - t[idx];
//         if (w > 0) {
//             int to_add = min(w, max_add);
//             t[idx] += to_add;
//             w -= to_add;
//         }
        
//     }
    
//     for (int i = 0; i < n; i++) {
//         cout << t[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }





#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n , w;
    cin >> n >> w;

    int sum = 0;

    vector<int> a(n), t(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        t[i] = (a[i] + 1)/2;
        sum += t[i];
    }

    if(sum > w) {
        cout << -1 << '\n';
        return 0;
    }

    w -= sum;

    vector< pair <int,int> > pr(n);
    for(int i = 0; i < n; i++) {
        pr[i].first = t[i];
        pr[i].second = i;
    }

    sort(pr.begin(),pr.end(),greater<pair <int,int> >());
    for(int i = 0; i < n; i++) {
        int idx = pr[i].second;
        int ans = a[idx] - t[idx];
        if(w > 0) {
            int res = min(ans,w);
            t[i] += res;
            w -= res;
        }
    }

    for(int i = 0; i < n; i++) {
        cout << t[i] << " ";
    }
    cout << '\n';
    return 0;
}
