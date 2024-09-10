#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int max = -1;
    int indexI;
    int indexJ;
    int arr[9][9];

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {

            if (arr[i][j] >= max) {
                max = arr[i][j];
                indexI = i + 1;
                indexJ = j + 1;
            }
        }
    }

    cout << max << endl;
    cout << indexI << " " << indexJ;
}