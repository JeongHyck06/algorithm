#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char *argv[]) {
    int n, a, max = -1000000, min = 1000000;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a;
        if (max < a) {
            max = a;
        }
        if (min > a) {
            min = a;
        }
    }

    cout << min << " " << max;
}