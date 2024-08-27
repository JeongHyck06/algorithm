#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char *argv[]) {
    int n, max = 0, index;
    for (int i = 0; i < 9; i++) {
        cin >> n;
        if (n > max) {
            max = n;
            index = i + 1;
        }
    }
    cout << max << endl << index << endl;
}