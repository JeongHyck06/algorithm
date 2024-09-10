#include <algorithm>
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    stack<int> stack;
    for (int t = 0; t < n; t++) {

        int order;
        int x;
        cin >> order;

        if (order == 1) {
            cin >> x;
            stack.push(x);
        } else if (order == 2) {
            if (stack.empty()) {
                cout << -1 << "\n";
            } else {
                cout << stack.top() << "\n";
                stack.pop();
            }
        } else if (order == 3) {
            cout << stack.size() << "\n";
        } else if (order == 4) {
            if (stack.empty()) {
                cout << 1 << "\n";
            } else {
                cout << 0 << "\n";
            }
        } else if (order == 5) {
            if (stack.empty()) {
                cout << -1 << "\n";
            } else {
                cout << stack.top() << "\n";
            }
        }
    }
}