#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstring>
#include <string>
#include <sstream>
#include <algorithm>
#include <utility>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <bitset>
#include <cmath>
#define mst(a,b) memset(a, b, sizeof(a))
#define repi(a,b) for(int i = a; i < b; i++)
#define repj(a,b) for(int j = a; j < b; j++)
#define pii pair<int,int>
#ifdef LOCAL
#define fre() freopen("in.txt","r",stdin)
#endif
#ifndef LOCAL
#define fre()
#endif
#define FASTIO
#ifdef FASTIO
#define IOS ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#endif
typedef long long ll;
typedef unsigned long long ull;
const int INF = 0x3f3f3f3f;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
using namespace std;
int main() {
int n, l; cin >> n >> l;
int sum = 0;
repi(0, n)sum += l + i;
if (l >= 0)cout << sum - l << endl;
else if (l + n < 1)cout << sum - (l + n - 1) << endl;
else cout << sum << endl;
return 0;
}
