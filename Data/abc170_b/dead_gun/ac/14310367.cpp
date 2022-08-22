#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cmath>
#pragma GCC optimize(2)
#define int long long
#define MAXN 2000000
#define INF (1e13 + 7)
#define MANX MAXN
using namespace std;
inline int read()
{
int x = 0, f = 1; char c = getchar();
while (c > '9' || c < '0') { if (c == '-') f = -1; c = getchar(); }
while (c >= '0' && c <= '9') { x = x * 10 + (c ^ 48); c = getchar(); }
return f * x;
}
signed main()
{
int x = read(), y = read();
for (int i = 0; i <= 100; i++)
for (int j = 0; j <= 100; j++)
if (i + j == x && 2 * i + 4 * j == y)
{
cout << "Yes";
return 0;
}
cout << "No";
return 0;
}
