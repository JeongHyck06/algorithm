#include <algorithm>
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n, a;
    int min = 1000001;
    int max = -1;

    cin >> n;
    if (n == 1) {
        cin >> a;
        cout << a * a;
    } else {

        for (int i = 0; i < n; i++) {
            cin >> a;
            if (a >= max) {
                max = a;
            }
            if (a <= min) {
                min = a;
            }
        }
        cout << min * max << endl;
    }
}