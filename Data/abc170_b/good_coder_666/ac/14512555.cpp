#include <cstdio>
using namespace std;
int main(int argc, char** argv)
{
int x, y;
scanf("%d%d", &x, &y);
if(y % 2 == 1)
{
puts("No");
return 0;
}
int a = (x << 2) - y >> 1;
int b = x - a;
puts((a >= 0 && b >= 0 && y != 1)? "Yes": "No");
return 0;
}
