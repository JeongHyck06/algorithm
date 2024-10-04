#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    for (int t = 0; t < 3; t++) {
        int n;
        __int128 s = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            long long a;
            cin >> a;
            s += a;
        }

        if (s > 0) {
            cout << '+' << endl;
        } else if (s < 0) {
            cout << '-' << endl;
        } else {
            cout << 0 << endl;
        };
    }
}
