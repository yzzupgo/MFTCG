#include <bits/stdc++.h>
using namespace std;

int main() {
    int ans = 0;
    vector<int> A(5), B(5);
    for (int i = 0; i < 5; i++){
        cin >> A.at(i);
    }
    B = A;
    for (int i = 0; i < 5; i++) {
        B.at(i) = A.at(i) % 10;
    }
    sort(B.begin(), B.end());
    for (int i = 0; i < 5; i++) {
        if (B.at(i) != 0) {
            ans += B.at(i);
            break;
        }
    }
    for (int i = 0; i < 5; i++) {
        ans += ((A.at(i) - 1) / 10 + 1) * 10;
    }
    cout << ans << endl;
}