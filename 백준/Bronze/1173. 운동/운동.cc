#include <iostream>
#include <string>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, m, M, T, R;
    cin >> N >> m >> M >> T >> R;
    int cnt = 0;
    int timespent = 0;
    int beat = m;
    if (beat + T > M) {
        cout << -1;
        return 0;
    }

    while (cnt < N) {
        timespent++;
        if (beat + T <= M) {
            beat += T;
            cnt++;
        } else {
            if (beat - R >= m)
                beat -= R;
            else
                beat = m;
        }
    }
    cout << timespent;
}
