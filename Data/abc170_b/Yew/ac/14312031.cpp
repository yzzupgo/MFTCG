#include <iostream>
using namespace std;
int main() {
int x, y;
scanf("%d %d", &x, &y);
if(y % 2 != 0) {
printf("No\n");
return 0;
}
if(2 * x == y) {
printf("Yes\n");
}
else if(4 * x == y) {
printf("Yes\n");
}
else if(((y - 2 * x) % 2) == 0) {
int a = (y - 2 * x) / 2;
if(a >= 0 && a <= x) {
printf("Yes\n");
}
else {
printf("No\n");
}
}
else {
printf("No\n");
}
return 0;
}
