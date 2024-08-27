#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char *argv[]) {
    int a, b, c;
    cin >> a >> b >> c;
    int x = a * b * c;
    int cnt[10] = {0};
    // 17037300
    string str = to_string(x);

    for (int i = 0; i < str.length(); i++) {
        for (int j = 0; j <= 9; j++) {
            if (str[i] - '0' == j) {
                cnt[j]++;
            }
        }
    }

    for (int i = 0; i <= 9; i++) {
        cout << cnt[i] << endl;
    }
}
