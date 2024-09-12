#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool compare(pair<int, string> a, pair<int, string> b) {
    return a.first < b.first;
}

int main() {
    int n;
    cin >> n;
    pair<int, string> temp;
    vector<pair<int, string>> arr;
    for (int i = 0; i < n; i++) {
        cin >> temp.first >> temp.second;
        arr.push_back(temp);
    }
    stable_sort(arr.begin(), arr.end(), compare);

    for (int i = 0; i < n; i++) {
        cout << arr[i].first << " " << arr[i].second << '\n';
    }
}