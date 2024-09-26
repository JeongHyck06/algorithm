#include <algorithm>
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    stack<char> st;
    bool inTag = false;
    string str;
    getline(cin, str);

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '<') {
            while (!st.empty()) {
                cout << st.top();
                st.pop();
            }
            inTag = true;
            cout << '<';
        } else if (str[i] == '>') {
            inTag = false;
            cout << '>';
        } else if (inTag) {
            cout << str[i];
        } else {
            if (str[i] == ' ') {
                while (!st.empty()) {
                    cout << st.top();
                    st.pop();
                }
                cout << ' ';
            } else {
                st.push(str[i]);
            }
        }
    }
    while (!st.empty()) {
        cout << st.top();
        st.pop();
    }
}