#include <bits/stdc++.h>
using namespace std;
int main(void) {
int x, y;
scanf("%d%d", &x, &y);
int cal = 4*x - y;
if(y%2 == 1) {
printf("No\n");
}
else if(cal < 2) {
printf("No\n");
} else {
int b = cal /= 2;
if(x-b < 0) {
printf("No\n");
} else {
printf("Yes\n");
}
}
return 0;
}
