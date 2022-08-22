#include <iostream>
using namespace std;
int main() {
int x, y;
scanf("%d %d", &x, &y);
int b = y - 2*x;
int a = x - b;
if(a >= 0) {
printf("Yes\n");
}
else {
printf("No\n");
}
return 0;
}
