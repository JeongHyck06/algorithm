#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char *argv[]) {
    int h, m;
    cin >> h >> m;

    if (m < 45) {
        if (h == 0) {
            h = 23;
        } else {
            h--;
        }
        m = 15 + m;
    } else {
        m = m - 45;
    }

    cout << h << " " << m;
}