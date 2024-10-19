#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<char>> a(8, vector<char>(8));
    char temp;
    int res = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < 8; i += 2) {
        for (int j = 0; j < 8; j += 2) {
            if (a[i][j] == 'F') {
                res++;
            }
        }
    }
    for (int i = 1; i < 8; i += 2) {
        for (int j = 1; j < 8; j += 2) {
            if (a[i][j] == 'F') {
                res++;
            }
        }
    }

    cout << res;
}