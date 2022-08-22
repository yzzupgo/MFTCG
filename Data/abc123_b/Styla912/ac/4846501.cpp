#include "bits/stdc++.h"
using namespace std;

int main() {
    vector<int> A(5);
    int B = 10;
    for (int i = 0; i < 5; i++) {
        cin >> A[i];
        if (A[i] % 10 != 0) B = min(B, A[i] % 10);
    }

    int ans = 0;
    for (int i = 0; i < 5; i++) {
        ans += (A[i] + 9) / 10 * 10;
    }
    cout << ans - 10 + B << endl;
}