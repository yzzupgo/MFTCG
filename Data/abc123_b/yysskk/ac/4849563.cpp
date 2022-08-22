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
        int adition;
        if ((A[i] % 10) > 0) {
            adition = 10 - (A[i] % 10);
        } else {
            adition = 0;
        }

        ans += A[i] + adition; 
        if (adition > 0) {
            maxnum = max(maxnum, adition);
        }
    }

    cout << (ans - maxnum) << endl;
    return 0;
}
