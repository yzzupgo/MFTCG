#include <iostream>
#include <string>
#include <cmath>
#include<algorithm>
#include<stack>
#include<queue>
#include<map>
#include<set>
#include<iomanip>
#define _USE_MATH_DEFINES
#include <math.h>
#include <functional>
using namespace std;
#define rep(i,x) for(int i=0;i<x;i++)
#define repn(i,x) for(int i=1;i<=x;i++)
typedef long long ll;
const ll INF = 1e17;
const ll MOD = 1000000007;
const ll MAX = 1000000;
ll max(ll a, ll b) {
if (a > b) { return a; }
return b;
}
ll min(ll a, ll b) {
if (a > b) { return b; }
return a;
}
int main() {
ll a, b;
cin >> a >> b;
if (a >= 13) { cout << b; }
else if (a >= 6) { cout << b / 2; }
else { cout << 0; }
}
