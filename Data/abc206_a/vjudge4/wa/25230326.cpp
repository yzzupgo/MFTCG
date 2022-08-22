#include <stdio.h>
int main() {
int N;
scanf("%d", &N);
if(N * 1.08 < 206) {
puts("Yay!\n");
} else if(N * 1.08 > 206) {
puts(":(\n");
} else {
puts("so-so");
}
return 0;
}
