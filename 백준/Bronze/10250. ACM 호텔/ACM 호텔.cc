#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char *argv[]) {
    int t;

    cin >> t;

    for (int i = 0; i < t; i++) {
        int h, w, n;
        cin >> h >> w >> n;

        int floor = n % h;
        int room = n / h + 1;

        if (floor == 0) {
            floor = h;
            room -= 1;
        }

        cout << floor * 100 + room << endl;
    }
}