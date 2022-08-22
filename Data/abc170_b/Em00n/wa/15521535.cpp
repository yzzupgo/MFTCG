#include <bits/stdc++.h>
using namespace std;
#define long long long
#define INF 2e18
#define MOD (long) (998244353)
#define umap unordered_map
int main()
{
long t = 1;
while (t--) {
long x, y;
cin >> x >> y;
if (y % 2 == 0 and x >= y/4 and x <= y/2) puts("Yes");
else puts("No");
}
}
