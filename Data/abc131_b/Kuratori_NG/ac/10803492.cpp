#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <iomanip>
#include <list>
#include <map>
#include <vector>
#define REP(i,m,n) for(ll i = (ll) (m);i < (ll) (n);i++)
#define rep(i,n) REP(i,0,n)
#define ll long long int
using namespace std;
double PI = 3.141592653589793;
ll gcd(ll a, ll b) {
if (b == 0) return a;
return gcd(b, a % b);
}
ll lcm(ll a, ll b) {
return a * b / gcd(a, b);
}
ll chg_DegRad(int deg) {
return deg * PI / 180.0;
}
ll chg_RadDeg(int rad) {
return rad * 180.0 / PI;
}
double dis(double xa, double ya, double xb, double yb) {
return pow(pow(xa - xb, 2.0) + pow(ya - yb, 2.0), 0.5);
}
ll n, L, sum ,ans = 100000;
int main() {
cin >> n >> L;
REP(i, 1, n + 1) sum += (L + i -1);
REP(i, 1, n + 1) {
ll tmp = abs(L + i - 1);
if (tmp < abs(ans)) ans = (L + i - 1);
}
cout << sum - ans << endl;
return 0;
}
