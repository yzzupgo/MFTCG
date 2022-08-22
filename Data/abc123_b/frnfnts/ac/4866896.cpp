#include <iostream>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;

int main(void) {
    int a[5];
    rep(i, 5) cin >> a[i];

    int time, round, max_diff = 0;
    rep(i, 5) {
        round = a[i] / 10 + !!(a[i] % 10);
        round *= 10;
        // cout << a[i] << " " << round << endl;
        max_diff = max(max_diff, round - a[i]);
        time += round;
    }

    cout << time - max_diff << endl;
}
