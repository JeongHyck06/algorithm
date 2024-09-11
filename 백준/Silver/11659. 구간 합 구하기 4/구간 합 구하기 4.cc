#include <algorithm>
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n, m, sum;
    cin >> n >> m;

    int arr[100001];

    for (int i = 1; i <= n; i++) {
        int temp;
        cin >> temp;
        arr[i] = arr[i - 1] + temp;
    }

    for (int i = 0; i < m; i++) {
        int start, end;
        cin >> start >> end;

        cout << arr[end] - arr[start - 1] << "\n";
    }
}