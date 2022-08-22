#include <iostream>
#include <math.h>
#include <algorithm>
#define ll long long int
#define FOR(i, a, b) for (ll i = (ll)(a); i < (ll)(b); i++)
#define REP(i, n) FOR(i, 0, n)
#define REP1(i, n) FOR(i, 1, n)

using namespace std;

int main()
{
    int minute[5], min_rem_val = 9, min_rem = 0, ans = 0;
    REP(i,5){
        cin >> minute[i];
        if(minute[i] % 10 < min_rem_val && minute[i] % 10 != 0){
            min_rem_val = minute[i] % 10;
            min_rem = i;
        }
    }

    REP(i,5){
        if(i == min_rem || minute[i] % 10 == 0){
            ans += minute[i];
        }else{
            ans += minute[i] + (10 - minute[i] % 10);
        }
    }

    cout << ans << endl;
    return 0;
}
