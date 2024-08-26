#include <iostream>
using namespace std;
int main(int argc, const char *argv[]) {
    int n, x;
    int arr[10001];
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (x > arr[i]) {
            cout << arr[i] << " ";
        }
    }
}
