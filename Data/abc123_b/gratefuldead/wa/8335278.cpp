#include <bits/stdc++.h>
using namespace std;


int get_first_digit(int a) {
    // Input num is assumed to be below 1000.
    int ans = a;
    ans = ans % 100;
    ans = ans % 10;
    return ans;
}

int main() {
    vector<int> nums(5); for (int i = 0; i < 5; i++) cin >> nums[i];

    int ans = 0;
    int ones_place = 9;
    for (auto elem : nums) {
        int one_p = get_first_digit(elem);
        if (one_p == 0) {
            ans += elem;
        } else {
            ans += elem - one_p + 10;
            if (one_p < ones_place) ones_place = one_p;
        }
    }

    cout << ans - 10 + ones_place << endl;

    return 0;
}
