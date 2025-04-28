#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cin >> str;

    string minWorld = string(51, 'z');

    for (int i = 1; i < str.length() - 1; i++) {
        for (int j = i + 1; j < str.length(); j++) {
            string firstWord = str.substr(0, i);
            string secondWord = str.substr(i, j - i);
            string thirdWord = str.substr(j);

            reverse(firstWord.begin(), firstWord.end());
            reverse(secondWord.begin(), secondWord.end());
            reverse(thirdWord.begin(), thirdWord.end());

            string shuffledWord = firstWord + secondWord + thirdWord;
            if (shuffledWord < minWorld) {
                minWorld = shuffledWord;
            }
        }
    }

    cout << minWorld;
}
