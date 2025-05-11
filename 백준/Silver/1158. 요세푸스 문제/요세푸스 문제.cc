#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> people;

    for (int i = 1; i <= n; i++) {
        people.push_back(i);
    }
    vector<int> res;
    int idx = 0;

    while (!people.empty()) {
        idx = (idx + k - 1) % people.size();
        res.push_back(people[idx]);
        people.erase(people.begin() + idx);
    }

    cout << "<";
    for (int i = 0; i < n - 1; i++) {
        cout << res[i] << ", ";
    }
    cout << res[n - 1] << ">";
}
