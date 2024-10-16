#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int input, output;
    int now = 0;
    int max = 0;
    for (int i = 0; i < 4; i++) {
        cin >> output;
        now -= output;

        cin >> input;
        now += input;

        if (max < now) {
            max = now;
        }
    };

    cout << max;
}