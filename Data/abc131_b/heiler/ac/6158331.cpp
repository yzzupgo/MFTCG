#include <stdio.h>
#include <algorithm>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <functional>
#include <math.h>
#include <map>
#include <set>
#include <string>
using namespace std;
#define fio ios::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
const int INT_INF = 1e9;
const ll LL_INF = 1e18;
const int MAXN = 500003;
typedef struct GE {
int to;
ll w;
GE() {};
}GE;
char s[5];
int main() {
int n, L;
scanf("%d %d", &n, &L);
int ans = 0;
int midif = 10000;
int realdif = 10000;
for (int i = 1; i <= n; i++) {
int cw = L + i - 1;
if (abs(cw) < midif) {
midif = abs(cw);
realdif = cw;
}
ans += cw;
}
printf("%d", ans - realdif);
return 0;
}
