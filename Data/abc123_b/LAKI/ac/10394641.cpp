#include <bits/stdc++.h>
using namespace std;

int main() {
    int order[5];
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        cin >> order[i];
        if (order[i] % 10 != 0) {
            sum += order[i] + (10 - order[i] % 10);
        } else {
            sum += order[i];
        }
    }
    int minv = 10;
    for (int i = 0; i < 5; i++) {
        int rest = order[i] % 10;
        if (rest != 0 && rest <= minv) {
            minv = rest;
        }
    }
    sum -= (10 - minv);
    cout << sum << endl;
}