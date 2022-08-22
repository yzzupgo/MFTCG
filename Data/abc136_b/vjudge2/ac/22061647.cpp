#include<bits/stdc++.h>
using namespace std;
int calc(int x)
{
int res = 0;
while (x)
res++, x /= 10;
return res;
}
int main()
{
int n, cnt = 0;scanf("%d", &n);
for (int i = 1; i <= n; i++)
if (calc(i) % 2) cnt++;
printf("%d\n", cnt);
}
