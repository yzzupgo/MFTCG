#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<pair<int, int>> A(5);
    for (int i = 0; i < 5; i++) {
        cin >> A[i].second;
        A[i].first = A[i].second % 10;
        if (A[i].first == 0) A[i].first += 10;
    }
    
    sort(A.begin(), A.end());
    int ans = 0;
    for (int i = 1; i < 5; i++) {
        int add = A[i].second + (10-A[i].first)%10;
        ans += add;
    }
    ans += A[0].second;
    cout << ans << endl;
    return 0;
}