#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool g(char ch) {
    return ch == '(' || ch == '{' || ch == '[' || ch == '<';
}

bool h(char g, char h) {
    return (g == '(' && h == ')') || 
           (g == '{' && h == '}') || 
           (g == '[' && h == ']') || 
           (g == '<' && h == '>');
}

int main() {
    string s;
    cin >> s;
    stack<char> st;
    int rep = 0;
    
    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];

        if (g(ch)) {
            st.push(ch);
        } else {
            if (st.empty()) {
                cout << "Impossible" << endl;
                return 0;
            }
            char top = st.top();
            st.pop();
            if (!h(top, ch)) {
                rep++;
            }
        }
    }
    
    if (!st.empty()) {
        cout << "Impossible" << endl;
    } else {
        cout << rep << endl;
    }
    
    return 0;
}
