#include <iostream>
using namespace std;
int main() {
    int n;
    int t;
    cin >> t;
    while (t--) {
        long long sum = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            long long candy;
            cin >> candy;
            sum = (sum + candy) % n;
        }
        if (sum == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}