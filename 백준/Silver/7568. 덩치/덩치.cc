#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> rank(n, 1);
    vector<int> x(n);
    vector<int> y(n);

    // 입력
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    // 브루트포스
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((x[i] < x[j]) && y[i] < y[j]) {
                rank[i]++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << rank[i] << " ";
    }
}