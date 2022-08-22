// SeeAlso: https://atcoder.jp/contests/abc123/tasks/abc123_b

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <limits>

using namespace std;

#define MAX 5

int main() {
    int A[MAX];

    cin >> A[0];
    cin >> A[1];
    cin >> A[2];
    cin >> A[3];
    cin >> A[4];

    int ans = 0;
    int maxnum = 0;

    for(int i = 0; i < MAX; i++) {
        ans += A[i] + 10 - A[i] % 10; 
        maxnum = max(maxnum, (10 - A[i] % 10));
    }

    cout << (ans - maxnum) << endl;
    return 0;
}
