#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    bool hasFBI = false;
    for (int t = 1; t <= 5; t++) {
        cin >> str;
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == 'F' && str[i + 1] == 'B' && str[i + 2] == 'I') {
                hasFBI = true;
                cout << t << " ";
                break;
            }
        };
    }
    if (!hasFBI) {
        cout << "HE GOT AWAY!" << endl;
    }
}