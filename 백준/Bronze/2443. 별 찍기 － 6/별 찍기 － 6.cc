#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    int floor = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < floor; j++) {
            cout << " ";
        }
        for (int j = floor; j < n * 2 - i - 1; j++) {
            cout << "*";
        }

        floor++;
        cout << endl;
    }
}
