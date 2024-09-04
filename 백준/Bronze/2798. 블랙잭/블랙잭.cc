#include <iostream>
using namespace std;
int main() {
    int n, m;
    int arr[100];
    int near = 0;
    int cnt = 0;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                cnt = arr[i] + arr[j] + arr[k];
                if (m - cnt >= 0 && n - near >= n - cnt) {
                    near = cnt;
                }
            }
        }
    }
    cout << near << endl;
}