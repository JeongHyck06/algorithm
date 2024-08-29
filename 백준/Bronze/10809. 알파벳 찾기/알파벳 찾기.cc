#include <iostream>

using namespace std;

int main() {

    // 세팅
    int alphabet[26];
    for (int i = 0; i < 26; i++)
        alphabet[i] = -1;

    string s;
    cin >> s;

    for (int i = s.length() - 1; i >= 0; i--) {
        alphabet[(int)s[i] - 97] = i;
    }

    for (int i = 0; i < 26; i++) {
        cout << alphabet[i] << " ";
    }

    return 0;
}