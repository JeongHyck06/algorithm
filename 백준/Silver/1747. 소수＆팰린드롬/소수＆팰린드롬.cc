#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

const int MAX = 2000000;

vector<bool> isPrime(MAX + 1, true);

void findPrime() {
    isPrime[0] = false;
    isPrime[1] = false;

    for (int i = 2; i * i < MAX; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

bool isPalin(int n) {
    string s = to_string(n);
    string r = s;
    reverse(r.begin(), r.end());
    return s == r;
}

int main() {
    int N;
    cin >> N;

    findPrime();

    for (int i = N; i <= MAX; i++) {
        if (isPrime[i] && isPalin(i)) {
            cout << i << '\n';
            break;
        }
    }
}