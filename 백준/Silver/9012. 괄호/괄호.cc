#include <algorithm>
#include <iostream>
#include <stack>
using namespace std;

vector<int> graph[1001];
bool visited[1001];

int n, m;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;

    for (int t = 0; t < n; t++) {
        string str;
        cin >> str;

        stack<char> st;
        bool isVPS = true;

        for (int i = 0; i < str.length(); i++) {
            if (str[i] == '(') {
                st.push('(');
            } else {
                if (st.empty()) {
                    isVPS = false;
                    break;
                }
                st.pop();
            }
        }
        if (!st.empty()) {
            isVPS = false;
        }
        if (isVPS) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}