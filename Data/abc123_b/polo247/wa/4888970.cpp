#include<iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
using namespace std;
#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)

int main()
{
    int min_val = 10, accum = 0;
    int a[5], a_floor[5], diff[5];
    REP(i, 5) {
        cin >> a[i];
        a_floor[i] = (a[i] / 10) * 10;
        diff[i] = a[i] - a_floor[i];
        if (diff[i] != 0) min_val = min(min_val, diff[i]);
        accum += a_floor[i];
    }
    cout << accum + 40 + min_val << endl;

    return 0;
}