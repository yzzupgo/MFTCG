#include <stdio.h>
int main() {
int n;
scanf("%d", &n);
int total = (1.08 * n);
if(total < 206) {
puts("Yay!");
} else if(total > 206) {
puts(":(");
} else if(total == 206) {
puts("so-so");
}
return 0;
}
