#include <stdio.h>
int main() {
int n;
scanf("%d", &n);
if(int(n * 1.08) < 206) {
puts("Yay!");
} else if(int(n * 1.08) > 206) {
puts(":(");
} else {
puts("so-so");
}
return 0;
}
