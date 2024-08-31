#include <iostream>

using namespace std;

int main() {
    int a, b, c, max = -1;
    while (true) {

        cin >> a >> b >> c;

        if (a == 0 && b == 0 && c == 0) {
            break;
        } //
        else {
            if (a > b && a > c) {
                max = a;
            } else if (b > a && b > c) {
                max = b;
            } else if (c > a && c > b) {
                max = c;
            } else {
                cout << "wrong" << endl;
            }
            if (max * max == a * a + b * b + c * c - max * max) {
                cout << "right" << endl;
            } else {
                cout << "wrong" << endl;
            }
        }
    }
}