#include <stdio.h>
int main() {
int n;
scanf("%d", &n);
if(int(n * 1.08) < 206) {
printf("Yay!");
} else if(int(n * 1.08) > 206) {
printf(":(");
} else if(int(n * 1.08) == 206) {
printf("so-so");
}
return 0;
}
