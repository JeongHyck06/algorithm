#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int arr[31] = {
        0,
    };
    int a;

    for (int i = 0; i < 28; i++) {
        cin >> a;
        arr[a] = 1;
    }

    for (int i = 1; i <= 30; i++) {
        if (!arr[i])
            cout << i << '\n';
    }
}