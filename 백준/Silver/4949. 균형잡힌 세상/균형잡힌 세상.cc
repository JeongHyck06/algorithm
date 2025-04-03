#include <iostream>
#include <stack>
using namespace std;

bool isBalance(const string &text) {
    stack<char> st;
    for (char ch : text) {
        if (ch == '(' || ch == '[') {
            st.push(ch);
        } else if (ch == ')') {
            if (st.empty() || st.top() != '(') {
                return false;
            }
            st.pop();
        } else if (ch == ']') {
            if (st.empty() || st.top() != '[') {
                return false;
            }
            st.pop();
        }
    }
    return st.empty();
}

int main() {
    string text;
    while (true) {
        getline(cin, text);
        if (text == ".")
            break;

        if (isBalance(text)) {
            cout << "yes" << '\n';
        } else {
            cout << "no" << '\n';
        }
    }
    return 0;
}