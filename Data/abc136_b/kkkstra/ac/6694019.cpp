#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const int maxn = 1000000 + 10;
inline int read()
{
char ch = getchar();
int f = 1, x = 0;
while (ch < '0' || ch > '9')
{
if (ch == '-')
f = -1;
ch = getchar();
}
while (ch >= '0' && ch <= '9')
{
x = x * 10 + ch - '0';
ch = getchar();
}
return x * f;
}
int num[10] = {1, 10, 100, 1000, 10000, 100000, 1000000};
int ans[10] = {0, 9, 9, 909, 909, 90909, 90909};
int main()
{
int n, i;
cin >> n;
if (n == 0)
{
printf("0\n");
return 0;
}
for (i = 1; i <= 6; ++i)
if (n / num[i] == 0)
break;
int Ans = ans[i - 1];
if (i % 2)
Ans += n - num[i - 1] + 1;
printf("%d\n", Ans);
return 0;
}
