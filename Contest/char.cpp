#include <iostream>
#include <set>
using namespace std;

int main() {

    string s;
    cin >> s;
    set<char> st;
    for (char c : s) {
        st.insert(c);
    } 
    int comp = st.size();
    if (comp <= 2) cout << 0 << endl;
    else cout << comp - 2 << endl;

    return 0;
}
