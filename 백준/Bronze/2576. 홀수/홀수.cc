#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool has_odd(vector<int> nums) {
    for (int i = 0; i < 7; i++) {
        if (nums[i] % 2 == 1) {
            return true;
        }
    }
    return false;
}
int sum_odds(vector<int> nums) {
    int sum = 0;
    for (int i = 0; i < 7; i++) {
        sum += (nums[i] % 2 == 1) ? nums[i] : 0;
    }
    return sum;
}

int min_num(vector<int> nums) {
    int min = 101;
    for (int i = 0; i < 7; i++) {
        if (min >= nums[i] && nums[i] % 2 == 1) {
            min = nums[i];
        }
    }
    return min;
}

int main() {
    vector<int> nums(7);
    for (int i = 0; i < 7; i++) {
        cin >> nums[i];
    };

    if (has_odd(nums)) {
        cout << sum_odds(nums) << endl;
        cout << min_num(nums);
    } else {
        cout << -1;
    }
}
