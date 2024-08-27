#include <iostream>
using namespace std;

int main(int argc, const char *argv[]) {
    int a, b;

    while (true) {
        if (a == 0 && b == 0) {
            break;
        } else {
            cin >> a >> b;
            if (a != 0 && b != 0) {
                cout << a + b << endl;
            }
        }
    }
}