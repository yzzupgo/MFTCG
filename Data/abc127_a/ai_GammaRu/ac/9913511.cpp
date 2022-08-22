#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define REP(i,n) FOR(i, 0, n)
#define PRINT(item) cout << (item) << '\n';
#define PRINT_VEC(V) \
for (auto v : (V)) cout << v << ' '
int main() {
int a; cin >> a;
int b; cin >> b;
if (a >= 13) PRINT(b)
else if (a >= 6) PRINT((int)b/2)
else PRINT(0)
return 0;
}
