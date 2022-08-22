#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;
int main() {
    int ans = 0, min = INT_MAX, minIndex = 0;
    vector<int> A(5);
    for (int i = 0; i < 5; i++) {
        cin >> A[i];
        if (A[i] % 10 != 0 && A[i] % 10 < min) {
            min = A[i] % 10;
            minIndex = i;
        }
    }
    for (int i = 0; i < 5; i++) {
        if (i != minIndex) ans += (int)ceil(A[i] / 10.0) * 10;
        else ans += A[i];
    }
    cout << ans << endl;
}
