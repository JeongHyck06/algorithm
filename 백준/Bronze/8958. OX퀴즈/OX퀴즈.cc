#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        int combo = 0, score = 0;
        for (int i : str) {
            if (i == 'O') {
                combo++;
                score += combo;
            } else {
                combo = 0;
            }
        }
        cout << score << endl;
    }
}