#include <bits/stdc++.h>
using namespace std;
int main()
{
int x, y;
scanf("%d %d", &x, &y);
if (y % 2 == 1)
printf("No");
else if (x * 2 > y)
printf("No");
else if (x * 4 < y)
printf("No");
else
printf("Yes");
return 0;
}
