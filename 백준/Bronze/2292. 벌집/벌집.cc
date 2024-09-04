#include <iostream>
using namespace std;

int main() {
    int n, cnt = 1;
    int lev = 1;

    cin >> n;

    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }

    while (n > lev) {
        lev += 6 * cnt;
        cnt++;
    }

    cout << cnt << endl;
}
