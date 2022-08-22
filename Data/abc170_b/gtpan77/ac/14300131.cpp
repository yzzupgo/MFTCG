#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5 + 77;
const int mod = (int)1e9 + 7;
int main()
{
int n, m, x, y;
bool possible = false;
scanf("%d%d", &x, &y);
for (int i = 0; i <= x; i++)
{
for (int j = 0; j <= x; j++)
{
if (i + j == x)
possible |= i * 2 + j * 4 == y;
}
}
if (possible)
printf("Yes\n");
else
printf("No\n");
return 0;
}
