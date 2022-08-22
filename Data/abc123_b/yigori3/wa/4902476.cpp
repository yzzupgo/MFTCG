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
    int minute[5], max_rem_val = 0, max_rem = 0, ans = 0;
    REP(i,5){
        cin >> minute[i];
        if(minute[i] % 10 > max_rem_val){
            max_rem_val = minute[i] % 10;
            max_rem = i;
        }
    }

    REP(i,5){
        if(i == max_rem){
            ans += minute[i];
        }else{
            ans += minute[i] + (10 - minute[i] % 10);
        }
    }

    cout << ans << endl;
    return 0;
}
