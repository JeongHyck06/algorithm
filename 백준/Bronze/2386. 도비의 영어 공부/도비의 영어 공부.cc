#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    char alp;
    while (true) {
        cin >> alp;
        getline(cin, str);
        if (alp == '#') {
            break;
        }
        int cnt = 0;
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == alp || str[i] == toupper(alp)) {
                cnt++;
            }
        }
        cout << alp << " " << cnt << endl;
    }
}