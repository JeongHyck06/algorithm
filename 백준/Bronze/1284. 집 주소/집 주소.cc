#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    while (true) {
        int cm = 1;
        cin >> str;

        if (str == "0") {
            break;
        }
        if (str[0])
            for (int i = 0; i < str.length(); i++) {
                if (str[i] == '1') {
                    cm += 2;
                } else if (str[i] == '0') {
                    cm += 4;
                } else {
                    cm += 3;
                };
                cm++;
            }
        cout << cm << endl;
    }
}

// 1 + 2 + 1 + 4 + 1 + 4 + 1
// 1 + 2 + 1 + 3 + 1 + 4 + 1
//