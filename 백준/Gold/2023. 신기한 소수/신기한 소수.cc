#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
static int n;

bool isPrime(int number) {
    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

void dfs(int number, int idx) {
    if (idx == n) {
        if (isPrime(number)) {
            cout << number << '\n';
        }
        return;
    }
    for (int i = 1; i < 10; i++) {
        if (i % 2 == 0) {
            continue;
        }
        if (isPrime(number * 10 + i)) {
            dfs(number * 10 + i, idx + 1);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;

    dfs(2, 1);
    dfs(3, 1);
    dfs(5, 1);
    dfs(7, 1);
}
