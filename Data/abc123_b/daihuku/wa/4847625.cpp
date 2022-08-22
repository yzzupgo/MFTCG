#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    int ans = 0, tmp = -1;
    vector<int> A(5), B(5);
    for (int i = 0; i < 5; i++) {
        cin >> A[i];
        B[i] = A[i] % 10;
    }
    sort(B.begin(), B.end());
    for (int i = 0; i < 5; i++) {
        if (B[i] != 0) {
            tmp = i;
            break;
        }
    }
    for (int i = 0; i < 5; i++) {
        if (A[i]%10 != B[tmp]) ans += (int)ceil(A[i] / 10.0) * 10;
        else ans += A[i];
    }
    cout << ans << endl;
}