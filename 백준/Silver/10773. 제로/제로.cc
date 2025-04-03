#include <iostream>
#include <stack>
using namespace std;

int main() {
    int k, res = 0;
    stack<int> st;
    cin >> k;
    for (int i = 0; i < k; i++) {
        int n;
        cin >> n;
        if (n != 0) {
            st.push(n);
        } else {
            st.pop();
        }
    }

    while (!st.empty()) {
        res += st.top();
        st.pop();
    }
    cout << res;
}