#include <iostream>
#include <string>
using namespace std;

int pac(int a) {
    if (a == 0) {
        return 1;
    }
    return a * pac(a - 1);
}

int main() {
    int res;
    int n, k;
    cin >> n >> k;

    res = pac(n) / (pac(n - k) * pac(k));

    cout << res;
}
