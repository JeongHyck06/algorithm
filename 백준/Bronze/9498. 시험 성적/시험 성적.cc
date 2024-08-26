#include <iostream>
using namespace std;
int main(int argc, const char *argv[]) {
    int s;

    cin >> s;

    if (s >= 90 and s <= 100) {
        cout << "A";
    } else if (s <= 89 and s >= 80) {
        cout << "B";
    } else if (s <= 79 and s >= 70) {
        cout << "C";
    } else if (s <= 69 and s >= 60) {
        cout << "D";
    } else {
        cout << "F";
    }
}
