#include <bits/stdc++.h>
using namespace std;
int main()
{
int n, l, sum = 0, x;
int a[205], tg[205] = {0};
scanf("%d%d",&n, &l);
for(int i = 1; i <= n; i ++)
{
a[i] = l + i - 1;
sum += a[i];
if(abs(a[i]) < abs(x)) x = a[i];
}
printf("%d\n", sum - x);
return 0;
}
