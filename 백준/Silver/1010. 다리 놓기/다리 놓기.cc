#include <iostream>
using namespace std;

long long combination(long long n, long long r) {
    long long result = 1;
    for (long long i = 1; i <= r; ++i) {
        result *= (n - i + 1);
        result /= i;
    }
    return result;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        long long n, m;
        cin >> n >> m;
        cout << combination(m, n) << endl;
    }

}