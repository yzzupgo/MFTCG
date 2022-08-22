#include <stdio.h>
int main() {
int N;
scanf("%d", &N);
if(int(1.08 * N) < 206) {
printf("Yay!\n");
} else if(int(1.08 * N) > 206) {
printf(":(\n");
} else {
printf("so-so\n");
}
return 0;
}
