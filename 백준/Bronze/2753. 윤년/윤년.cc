#include <iostream>
using namespace std;
int main(int argc, const char *argv[]) {
    int year;

    cin >> year;

    if ((year % 4 == 0 and year % 100 != 0) or year % 400 == 0) {
        cout << 1;
    } else {
        cout << 0;
    }
}
