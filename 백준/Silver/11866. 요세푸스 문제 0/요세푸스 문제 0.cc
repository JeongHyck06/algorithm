#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    for (int i = 1; i <= n; i++) {
        arr[i - 1] = i;
    }
    vector<int> result;
    int idx = 0;

    while (!arr.empty()) {
        idx = (idx + (k - 1)) % arr.size();
        result.push_back(arr[idx]);
        arr.erase(arr.begin() + idx);
    }

    cout << "<";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i != result.size() - 1)
            cout << ", ";
    }
    cout << ">" << endl;
}
