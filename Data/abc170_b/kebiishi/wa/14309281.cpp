#include<cstdio>
#include<iostream>
using namespace std;
int main(void) {
int X, Y;
scanf("%d", &X);
scanf("%d", &Y);
int b = (Y - 2 * X) / 2;
bool ans = true;
if ((Y - 2 * X) % 2 != 0) {
ans = false;
} else if (b > X) {
ans = false;
}
printf(ans ? "Yes" : "No");
return 0;
}
