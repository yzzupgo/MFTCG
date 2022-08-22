#include <cstdio>
using namespace std;
int main(int argc, char** argv)
{
int x, y;
scanf("%d%d", &x, &y);
int a = (x << 2) - y >> 1;
int b = x - a;
puts((a >= 0 && b >= 0)? "Yes": "No");
return 0;
}
