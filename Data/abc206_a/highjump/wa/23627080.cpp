#pragma GCC optimize("Ofast")
#include <iostream>
#include <fstream>
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
#include <chrono>
#include <random>
#include <unordered_map>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
template <class T>using V = vector<T>;
template <class T>using VV = V<V<T>>;
template <class T, class U>bool chmin(T &t, const U &u) {
if(t > u) {
t = u;
return 1;
} else {
return 0;
}
}
template <class T, class U>bool chmax(T &t, const U &u) {
if(t < u) {
t = u;
return 1;
} else {
return 0;
}
}
#define REP(i,n) for(ll i=0;i<ll(n);i++)
#define FOR(i,a,b) for(ll i=ll(a);i<=ll(b);i++)
#define FORD(i,a,b) for(ll i=ll(a);i>=ll(b);i--)
#define MP make_pair
#define SZ(x) ll(x.size())
#define ALL(x) x.begin(),x.end()
#define INF 1000100010001000
#define CINF 1ll<<63-1
#define PI 3.14159265358979323846
#define endl "\n"
#define EPS 1e-9
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
signed main() {
cin.tie(0);
ios::sync_with_stdio(false);
cout << fixed << setprecision(15);
ll n;
cin >> n;
n *= 108;
if(n < 20600) {
cout << "Yay!" << endl;
} else if(n == 20600) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
