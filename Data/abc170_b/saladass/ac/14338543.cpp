#include <bits/stdc++.h>
using namespace std;
int main(void) {
int x, y;
scanf("%d%d", &x, &y);
int cal = 4*x - y;
int b = cal /= 2;
int a = x-b;
if(y%2 == 1) {
printf("No\n");
}
else {
if(a < 0 || b<0) {
printf("No\n");
} else {
printf("Yes\n");
}
}
return 0;
}
