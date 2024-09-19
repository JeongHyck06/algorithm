#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int res = 0;

    for (int k = 0; k < n; k++) {
        long find = a[k];
        int i = 0;
        int j = n - 1;

        while (i < j) {
            if (a[i] + a[j] == find) {
                if (i != k && j != k) {
                    res++;
                    break;
                } else if (i == k) {
                    i++;
                } else if (j == k) {
                    j--;
                }
            } else if (a[i] + a[j] < find) {
                i++;
            } else {
                j--;
            }
        }
    }
    cout << res;
}