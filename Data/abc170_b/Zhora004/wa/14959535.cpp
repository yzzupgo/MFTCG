#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <unordered_set>
#include <queue>
#include <deque>
#include <string>
#include <sstream>
#include <iomanip>
#include <map>
#include <unordered_map>
#include <stack>
#include <cstdio>
#include <climits>
#include <tuple>
#include <ctime>
#define FOR(i,a,n) for (int i = a; i < n; i++)
#define IFOR(i,n,a) for (int i = n; i >= a; i--)
#define mp make_pair
#define full(a) a.begin(), a.end()
#define SZ(x) ((int)(x).size())
#define TC(tc) while (tc--)
#define VI vector<int>
#define PII pair<int, int>
#define trav(a,x) for (auto& a : x)
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
using namespace std;
const int mod = 1e9 + 7;
const ull num = 1e18;
int main()
{
ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int x, y; cin >> x >> y;
if (y & 1 || y <= x)
{
cout << "NO";
return 0;
}
int b = -((2 * x - y) / 2);
if (b < 0 || b > x)
{
cout << "NO";
return 0;
}
int a = -((y - 4 * x) / 2);
if (a < 0 || a > x || a + b != x)
{
cout << "NO";
return 0;
}
cout << "YES";
return 0;
}
