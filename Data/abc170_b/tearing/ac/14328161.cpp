#include <bits/stdc++.h>
using namespace std;
int main()
{
int x, y;
scanf("%d%d", &x, &y);
for(int i=0; i<=x; i++)
{
int j = x - i;
if((i * 2 + j * 4) == y )
return printf("%s", "Yes"), 0;
}
printf("%s", "No");
}
