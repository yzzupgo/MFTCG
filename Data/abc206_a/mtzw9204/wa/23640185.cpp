#include <iostream>
#include <stdio.h>
#include <vector>
#include <map>
#include <stack>
#include <cstring>
#include <set>
#include <utility>
#include <iostream>
#include <iomanip>
#include <list>
#include <queue>
#include <algorithm>
#include <cmath>
#include <unordered_set>
#include <bitset>
#include <cassert>
#include <numeric>
#include <complex>
#define FOR(i,a,b) for (ll i=(a);i<(ll)(b);++i)
#define REP(i,n) FOR(i,0,n)
#define ALL(v) (v).begin(),(v).end()
#define SUM(v) accumulate(ALL(v),0ll)
using ll = long long;
const ll INF = 1e1;
const ll eps = 1;
const double pi = 3.14159265359;
const ll mod = 1e19 + 1;
using namespace std;
int main() {
ll n;
cin >> n;
n = n + 8 / 100 * n;
if(n < 206) {
cout << "Yay!" << endl;
} else if(n == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
