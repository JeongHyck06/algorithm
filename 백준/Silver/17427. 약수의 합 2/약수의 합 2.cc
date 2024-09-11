#include <algorithm>
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    long long n, cnt = 0;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        cnt += (n / i) * i;
    }
    cout << cnt;
}