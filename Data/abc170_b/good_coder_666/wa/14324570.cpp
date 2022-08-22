#include <cstdio>
using namespace std;
int main(int argc, char** argv)
{
int x, y;
scanf("%d%d", &x, &y);
if(x == 1)
{
puts((y == 2 || y == 4)? "Yes": "No");
return 0;
}
for(int i=1; i<=x; i++)
for(int j=1; j<=x; j++)
if(2 * i + 4 * j == y)
{
puts("Yes");
return 0;
}
puts("No");
return 0;
}
