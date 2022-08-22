#include <stdio.h>
int main() {
int n;
scanf("%d", &n);
if(int(1.08 * n) < 206) {
puts("Yay!");
} else if(int(1.08 * n) > 206) {
puts(":(");
} else {
puts("so-so");
}
return 0;
}
