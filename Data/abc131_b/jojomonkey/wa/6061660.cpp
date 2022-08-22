#include <stdio.h>
#include <cmath>
#include <stdlib.h>
int main()
{
int a, b;
int realtest = 0;
int minus = 100;
int realminus;
int first;
int i;
scanf("%d %d", &a, &b);
first = b;
for (i = 0; i < a; i++) {
if (minus > abs(first + i)) {
minus = abs(first + i);
realminus = first + i;
}
}
for (i = 0; i < a; i++) {
realtest += (first + i);
}
realtest = realtest - realminus;
printf("%d\n", realtest);
return 0;
}
