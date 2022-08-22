#include <stdio.h>
int main() {
int x;
scanf("%d", &x);
int y = 1.08 * x;
if(y == 206) {
puts("so-so");
} else if(y > 206) {
puts(":(");
} else if(y < 206) {
puts("Yay");
}
return 0;
}
