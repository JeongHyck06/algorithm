#include <iostream>
#include <queue>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int v;
    cin >> v;

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == v) {
            cnt++;
        }
    }
    cout << cnt;
}