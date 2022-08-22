#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <typeinfo>
#include <math.h>
#include <iomanip>
#include <limits>
#include <functional>
using namespace std;
using ll = long long;
const ll res = 1000000007;
#define rep(i,n) for (ll i = 0; i < (ll)(n); i++)
#define PI 3.14159265358979323846264338327950L
int main() {
int x, y, ans = 0;
cin >> x >> y;
rep(i,x+1){
rep(j,x+1){
if (i+j == x) {
if (y == 2 * i + 4 * j) {
cout << "Yes" << endl;
return 0;
}
}
}
}
cout << "No" << endl;
}
