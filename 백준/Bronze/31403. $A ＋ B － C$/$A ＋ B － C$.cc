#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char *argv[]) {
    int a, b, c;
    cin >> a >> b >> c;

    cout << a + b - c << endl;

    if (b < 10) {
        cout << a * 10 + b - c;
    } else if (b < 100) {
        cout << a * 100 + b - c;
    } else if (b < 1000) {
        cout << a * 1000 + b - c;
    } else {
        cout << a * 10000 + b - c;
    }
}