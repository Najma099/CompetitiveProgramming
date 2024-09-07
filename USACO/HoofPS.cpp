#include <iostream>
#include<bits/stdc++.h>
#include<vector>
#include<math.h>
using namespace std;

int winOrLose(char fir , char sec) {
    if((fir == 'H' && sec == 'P') || (fir == 'P' && sec == 'S') || (fir == 'S' && sec == 'H')) {
        return 1;
    }
    return 0;
}
int main() {
    freopen("hps.in", "r", stdin);
    freopen("hps.out", "w", stdout);
    int n;
    cin >> n;

    vector <char> ch(n+1,0);
    vector<int> hoof(n+1,0);
    vector<int> scis(n+1,0);
    vector<int> pap(n+1,0);

    

    for(int i = 1; i <= n; i++) {

        cin >> ch[i];
        scis[i] += scis[i-1] + winOrLose('S', ch[i]);
        hoof[i] += hoof[i-1] + winOrLose('H', ch[i]);
        pap[i] += pap[i-1] + winOrLose('P', ch[i]);

        // switch(ch[i]) {
        //     case 'H' : pap[i] ++;
        //                 break;

        //     case 'P' : scis[i]++;
        //                 break;
        
        //     case 'S' : hoof[i]++;
        //                 break;

        // }

    }
    // cout << "scis: " << '\n';
    // for(int i = 1; i <= n; i++) {
    //     cout << scis[i] << " ";
    // }
    // cout << "\n";
    int mx = 0;
    //hoof
    for(int i = 1; i <= n; i++) {
        int a = hoof[i] + (pap[n] - pap[i]);
        mx = max(mx, a);
        int b = hoof[i] + (scis[n] - scis[i]);
        mx = max(mx, b);
    }

    //scissor
    for(int i = 1; i <= n; i++) {
        int a = scis[i] + (pap[n] - pap[i]);
        mx = max(mx, a);
        int b = scis[i] + (hoof[n] - hoof[i]);
        mx = max(mx, b);
    }

    for(int i = 1; i <= n; i++) {
        int a = pap[i] + (hoof[n] - hoof[i]);
        mx = max(mx, a);
        int b = pap[i] + (scis[n] - scis[i]);
        mx = max(mx, b);
    }

    cout << mx << '\n';
}