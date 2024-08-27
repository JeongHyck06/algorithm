#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char *argv[]) {
    string str;
    int cnt = 1;
    getline(cin, str);

    if (str[0] == ' ' && str.length() == 1) {
        cout << 0;
    } else {
        for (int i = 1; i < str.length() - 1; i++) {
            if (str[i] == ' ') {
                cnt++;
            }
        }
        cout << cnt;
    }
}
