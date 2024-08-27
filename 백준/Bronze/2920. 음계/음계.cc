#include <iostream>
#include <string>
using namespace std;

int main() {
    int arr[8];
    string flag = "mixed";

    for (int i = 0; i < 8; i++) {
        cin >> arr[i];
    }

    if (arr[0] == 1) {
        flag = "ascending";
        for (int i = 1; i < 8; i++) {
            if (arr[i] != arr[i - 1] + 1) {
                flag = "mixed";
                break;
            }
        }
    }

    if (arr[0] == 8) {
        flag = "descending";
        for (int i = 1; i < 8; i++) {
            if (arr[i] != arr[i - 1] - 1) {
                flag = "mixed";
                break;
            }
        }
    }

    cout << flag;
}