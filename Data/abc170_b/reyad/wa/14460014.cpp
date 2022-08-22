#include <bits/stdc++.h>
using namespace std;
int main() {
int x, y;
scanf("%d %d", &x, &y);
if(y&1) {
printf("No\n");
} else {
int b = (y >> 1) - x;
int a = (x << 1) - b;
if(a < 0 || b < 0 || (a+b) == 0) {
printf("No\n");
} else {
printf("Yes\n");
}
}
return 0;
}
