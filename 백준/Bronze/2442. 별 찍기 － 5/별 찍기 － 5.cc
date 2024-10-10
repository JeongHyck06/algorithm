#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    int floor = 1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        for (int k = 0; k < floor; k++) {
            cout << "*";
        }
        floor += 2;
        if (i != n - 1) {
            cout << endl;
        }
    }
}
