#include <cstdio>
#include <random>
#include <cassert>
#include <algorithm>
#include <iostream>
#include <chrono>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <iomanip>
#include <cstring>
#include <cmath>
#include <bitset>
#define pb push_back
#define mk make_pair
#define eb emplace_back
#define eps 1e-8
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
#define int long long
using namespace std;
typedef long double ld;
typedef unsigned int ui;
typedef pair<int,int> pii;
typedef tuple<int, int, int> tiii;
typedef vector<int> vii;
typedef vector<long double> vd;
const int inf = 1e9;
const long long INF = 1e18;
const int M = 1e9 + 7;
signed main()
{
#ifndef ONLINE_JUDGE
#endif
int a, b;
cin >> a >> b;
int res = a - b;
res = max(res, a + b);
res = max(a * b, res);
cout << res << endl;
return 0;
}
