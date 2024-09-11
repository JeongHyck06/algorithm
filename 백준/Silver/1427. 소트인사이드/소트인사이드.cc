#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    int arr[1000001];
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        arr[i] = str[i] - '0';
    }
    sort(arr, arr + str.length(), greater<int>());

    for (int i = 0; i < str.length(); i++) {
        cout << arr[i];
    }
}