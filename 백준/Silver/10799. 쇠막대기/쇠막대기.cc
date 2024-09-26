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
    string str;
    cin >> str;
    int cnt = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '(') {
            st.push('(');
        } else {
            st.pop();
            if (str[i - 1] == '(') {
                cnt += st.size();
            } else {
                cnt += 1;
            }
        }
    }
    cout << cnt;
}