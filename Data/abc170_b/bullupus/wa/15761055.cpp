#include <cstdio>
int main() {
int x, y;
bool flag=false;
scanf("%d%d", &x, &y);
for(int i=0;i<x;i++) {
if((i*4 + (x-i)*2) == y) flag = true;
}
flag ? puts("Yes") : puts("No");
return 0;
}
