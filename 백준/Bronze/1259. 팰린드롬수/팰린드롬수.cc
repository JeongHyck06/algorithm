#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    
    while (true) {
        cin >> str;
        if (str == "0") {
            break;
        }
        
        bool is_palindrome = true;  // 팰린드롬 여부를 저장하는 변수
        int len = str.length();
        
        // 문자열의 중앙을 기준으로 앞뒤를 비교
        for (int i = 0; i < len / 2; i++) {
            if (str[i] != str[len - i - 1]) {
                is_palindrome = false;
                break;
            }
        }
        
        if (is_palindrome) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
}
