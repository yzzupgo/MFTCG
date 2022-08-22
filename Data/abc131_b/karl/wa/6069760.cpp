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
struct aa {
int a, f;
bool operator<(const aa& rhs)const {
return a < rhs.a;
}
}cao[2100];
int main() {
int n, L; cin >> n >> L;
int sum = 0;
repi(1, n + 1) {
cao[i].a = L + i - 1;
sum += cao[i].a;
if (cao[i].a < 0) {
cao[i].a = -cao[i].a;
cao[i].f = -1;
}
}
sort(cao + 1, cao + n + 1);
cout << (sum - cao[1].a* cao[1].f) << endl;
return 0;
}
