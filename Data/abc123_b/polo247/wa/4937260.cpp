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
    int min_reminder = 10, accum = 0;
    int a, reminder;
    REP(i, 5) {
        cin >> a;
        reminder = a % 10;
        cout << reminder << endl;
        accum += (reminder == 0) ? a : (a / 10 + 1) * 10;
        if (reminder != 0) min_reminder = min(min_reminder, reminder);
    }
    if (min_reminder != 10) accum = accum - 10 + min_reminder;

    cout << accum << endl;

    return 0;
}