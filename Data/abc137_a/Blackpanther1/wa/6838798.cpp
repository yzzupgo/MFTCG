#include <bits/stdc++.h>
using namespace std;
int sum(int x, int y)
{
return x+y;
}
int sub(int x, int y)
{
return x-y;
}
int mul(int x, int y)
{
return x*y;
}
int main(void)
{
int a, b, sm, sb, ml, gr;
scanf("%d %d", &a, &b);
sm = sum(a, b);
sb = sub(a, b);
ml = mul(a, b);
if(sm >= sb && sm >= ml) gr = sm;
else if(sb >= sm && sb >= ml) gr = sb;
else if(ml >= sm && ml >= sb) gr = ml;
else
printf("%d\n", gr);
}
