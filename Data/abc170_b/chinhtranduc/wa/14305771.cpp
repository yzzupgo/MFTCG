#include <iostream>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <math.h>
using namespace std;
typedef long long ll;
ll mod = 998244353;
ll INF = 1000000000000000000;
#define PI 3.14159265
ll limitpow (int x, int n) {
if (n==0) return 1;
ll u = limitpow(x, n/2);
if (u > 1000000000 || u < 0) return -1;
u = (u*u);
if (u > 1000000000 || u < 0) return -1;
if (n%2==1) u = (u*x);
if (u > 1000000000 || u < 0) return -1;
return u;
}
int main() {
int x, y;
cin >> x >> y;
if (y%2==1 || y/2 < x || y/4 > x) {
cout << "No" << endl;
}
else {
cout << "Yes" << endl;
}
return 0;
}
