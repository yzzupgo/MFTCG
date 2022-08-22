#include <iostream>
using namespace std;

int main() {

    int sum = 0, min_rem = 10;
    for (int i = 0; i < 5; i++) {
        int t;
        cin >> t;
        int rem = t % 10;

        if (rem != 0) {
            sum += t + (10 - rem);
            min_rem = min(min_rem, rem);
        } else {
            sum += t;
        }
    }

    int res = sum - (10 - min_rem);
    cout << res << endl;
    return 0;
}