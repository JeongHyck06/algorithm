#include <algorithm>
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int arr[1000001];
    int n, k;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << '\n';
    }
}