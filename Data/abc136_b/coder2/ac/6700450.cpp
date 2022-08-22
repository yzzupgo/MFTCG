#include<bits/stdc++.h>
using namespace std;
int n;
int main()
{
int ans = 0;
scanf("%d", &n);
if(n == 0)
{
printf("0\n");
}
else if(n < 10)
{
printf("%d\n", n);
}
else if(n < 100)
{
printf("9\n");
}
else
{
int m = n;
int a = 0, b = 0;
while(m)
{
a++;
m /= 10;
}
if(a == 3)
{
ans = 9 + n - 100 + 1;
}
else if(a == 4)
{
ans = 9 + 900;
}
else if(a == 5)
{
ans = 9 + 900 + n - 10000 + 1;
}
else if(a == 6)
{
ans = 9 + 900 + 90000;
}
printf("%d", ans);
}
return 0;
}
