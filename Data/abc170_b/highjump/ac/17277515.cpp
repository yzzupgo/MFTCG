#pragma GCC optimize("Ofast")
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <cctype>
#include <sstream>
#include <stack>
#include <deque>
#include <queue>
#include <list>
#include <set>
#include <map>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
template <class T>
using V = vector<T>;
template <class T>
using VV = V<V<T>>;
#define REP(i,n) for(ll i=0;i<ll(n);i++)
#define REPD(i,n) for(ll i=n-1;i>=0;i--)
#define FOR(i,a,b) for(ll i=ll(a);i<=ll(b);i++)
#define FORD(i,a,b) for(ll i=ll(a);i>=ll(b);i--)
#define PB push_back
#define MP make_pair
#define SZ(x) ll(x.size())
#define ALL(x) x.begin(),x.end()
#define MAX 1000000
#define NIL -1
#define INF pow(2,31)-1
#define MOD 1000000007
#define PI 3.14159265358979323846
#define endl "\n"
template <class T, class U>
void chmin(T & t, const U & u) {
if (t > u) t = u;
}
template <class T, class U>
void chmax(T & t, const U & u) {
if (t < u) t = u;
}
signed main() {
ll x, y; cin >> x >> y;
bool b = false;
REP(i, x+1) {
if (i * 4 + (x - i)* 2 == y) {
b=true;
break;
}
}
b ? cout << "Yes" << endl : cout << "No" << endl;
}
