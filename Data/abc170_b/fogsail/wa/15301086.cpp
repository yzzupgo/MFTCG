#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <queue>
#include <vector>
#include <stack>
#include <map>
#include <set>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <bitset>
#include <assert.h>
using namespace std;
typedef long long ll;
typedef set<int>::iterator ssii;
#define Cmp(a,b) memcmp(a, b, sizeof(b))
#define Cpy(a,b) memcpy(a, b, sizeof(b))
#define Set(a,v) memset(a, v, sizeof(a))
#define debug(x) cout << #x << ": " << x << endl
#define _forS(i,l,r) for(set<int>::iterator i = (l); i != (r); i++)
#define _rep(i,l,r) for(int i = (l); i <= (r); i++)
#define _for(i,l,r) for(int i = (l); i < (r); i++)
#define _forDown(i,l,r) for(int i = (l); i >= r; i--)
#define debug_(ch,i) printf(#ch"[%d]: %d\n", i, ch[i])
#define debug_m(mp,p) printf(#mp"[%d]: %d\n", p->first, p->second)
#define debugS(str) cout << "dbg: " << str << endl;
#define debugArr(arr,x,y) _for(i, 0, x) { _for(j, 0, y) printf("%c", arr[i][j]); printf("\n"); }
#define _forPlus(i,l,d,r) for(int i = (l); i + d < (r); i++)
#define lowbit(i) (i & (-i))
#define MPR(a,b) make_pair(a, b)
pair<int, int> crack(int n) {
int st = sqrt(n);
int fac = n / st;
while (n % st) {
st += 1;
fac = n / st;
}
return make_pair(st, fac);
}
inline ll qpow(ll a, int n) {
ll ans = 1;
for(; n; n >>= 1) {
if(n & 1) ans *= 1ll * a;
a *= a;
}
return ans;
}
int a, b;
int main() {
cin >> a >> b;
bool ans = ((4*a - b) % 2 == 0 && (4*a - b) / 2 > 0);
ans ? printf("YES\n") : printf("NO\n");
}
