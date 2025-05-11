#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    string exp;
    cin >> exp;

    vector<double> val(n);

    for (int i = 0; i < n; i++) {
        cin >> val[i];
    }

    stack<double> st;

    for (char ch : exp) {
        if (ch >= 'A' && ch <= 'Z') {
            st.push(val[ch - 'A']);
        } else {
            double a = st.top();
            st.pop();
            double b = st.top();
            st.pop();

            if (ch == '+') {
                st.push(b + a);
            } else if (ch == '-') {
                st.push(b - a);
            } else if (ch == '*') {
                st.push(b * a);
            } else if (ch == '/') {
                st.push(b / a);
            }
        }
    }

    printf("%.2f", st.top());
}
