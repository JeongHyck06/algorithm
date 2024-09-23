#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n, res = 1;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        res *= i;
    }

    cout << res;
}