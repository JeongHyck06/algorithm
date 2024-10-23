#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<string> str(n);

    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }
    string tempStr = str[0];

    for (int i = 0; i < tempStr.length(); i++) {
        for (int j = 1; j < n; j++) {
            if (str[j][i] != tempStr[i]) {
                tempStr[i] = '?';
                break;
            }
        }
    }

    cout << tempStr << endl;
}
