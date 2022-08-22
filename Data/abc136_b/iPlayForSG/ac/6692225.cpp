#include <algorithm>
#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <queue>
#include <ctime>
#include <stack>
#include <set>
#include <map>
using namespace std;
#define rg register
#define LL long long
#define __space putchar(' ')
#define __endl putchar('\n')
template <typename qwq> inline void read(qwq &x)
{
x = 0;
rg int f = 1;
rg char c = getchar();
while (c < '0' || c > '9')
{
if (c == '-') f = -1;
c = getchar();
}
while (c >= '0' && c <= '9')
{
x = (x << 1) + (x << 3) + (c ^ 48);
c = getchar();
}
x *= f;
}
template <typename qaq> inline void print(qaq x)
{
if (x < 0)
{
putchar('-');
x = -x;
}
if (x > 9) print(x / 10);
putchar(x % 10 + '0');
}
int n, ans;
int main()
{
read(n);
if (n >= 1 && n <= 9) ans = n;
else if (n >= 10 && n <= 99) ans = 9;
else if (n >= 100 && n <= 999) ans = 9 + n - 99;
else if (n >= 1000 && n <= 9999) ans = 9 + 900;
else if (n >= 10000 && n <= 99999) ans = 9 + 900 + n - 9999;
else if (n >= 100000 && n <= 999999) ans = 9 + 900 + 90000;
print(ans);
return 0;
}
