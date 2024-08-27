#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char *argv[]) {
    int n, cnt = 0;
    string a;
    cin >> n >> a;
    for (int i = 0; i < a.length(); i++) {
        cnt += a[i] - '0';
    }
    cout << cnt;
}
