#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> cnt(3);
    string str;
    string color[10] = {"black", "brown", "red",    "orange", "yellow",
                        "green", "blue",  "violet", "grey",   "white"};

    // for (int i = 0; i < 10; i++) {
    //     cout << color[i] << endl;
    //     cout << cnt[i] << endl;
    // }

    for (int i = 0; i < 3; i++) {
        cin >> str;
        for (int j = 0; j < 10; j++) {
            if (str == color[j]) {
                cnt[i] = j;
            }
        }
    }

    long long sum = cnt[0] * 10 + cnt[1];

    long long mul = 1;

    for (int i = 0; i < cnt[2]; i++) {
        mul *= 10;
    }

    long long result = sum * mul;
    cout << result;
}