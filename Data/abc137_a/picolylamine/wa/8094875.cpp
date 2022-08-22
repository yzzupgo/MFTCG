#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
int A, B; scanf("%d", &A, &B);
int a, b, c;
a = A + B;
b = A - B;
c = A*B;
printf("%d", max(max(a, b), c));
return 0;
}
