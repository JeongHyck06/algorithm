#include <iostream>
using namespace std;
int main(int argc, const char *argv[]) {
    float n;
    cin >> n;
    float arr[1000];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    float m = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] >= m) {
            m = arr[i];
        }
    }

    for (int i = 0; i < n; i++) {
        arr[i] = float(float(arr[i]) / float(m) * 100);
    }

    // for (int i = 0; i < n; i++) {
    //     cout << arr[i] << endl;
    // }

    float s = 0;

    for (int i = 0; i < n; i++) {
        s += arr[i];
    }
    cout << s / n;
}
