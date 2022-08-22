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
for (int i = 0; i <= x; i++) {
if ((i*2 + (x-i)*4) == y) {
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
