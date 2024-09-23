#include <iostream>
#include <queue>
using namespace std;
int map[1001][1001];
int visited1[1001];
int visited2[1001];
int n, m, v;
queue<int> q;
void bfs() {
    while (!q.empty()) {
        int v = q.front();
        cout << v << " ";
        q.pop();
        for (int j = 1; j <= n; j++) {
            if (map[v][j] && visited1[j] == 0) {
                visited1[j] = 1;
                q.push(j);
            }
        }
    }
}
void dfs(int v) {
    cout << v << " ";
    for (int j = 1; j <= n; j++) {
        if (map[v][j] && visited2[j] == 0) {
            visited2[j] = 1;
            dfs(j);
        }
    }
}
int main() {
    cin >> n >> m >> v;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        map[a][b] = 1;
        map[b][a] = 1;
    }
    visited2[v] = 1;
    dfs(v);
    cout << endl;
    visited1[v] = 1;
    q.push(v);
    bfs();
}