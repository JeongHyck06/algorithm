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
    stack<char> st;
    string str;
    int n;
    cin >> n;
    cin.ignore();

    for (int t = 0; t < n; t++) {
        getline(cin, str);

        for (int i = 0; i < str.length(); i++) {
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
        while (!st.empty()) {
            cout << st.top();
            st.pop();
        }
        cout << endl;
    }
}