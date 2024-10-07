#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int plugs;
        cin >> plugs;
        ans += plugs - 1;
    }
    ans++;
    cout << ans;
}
