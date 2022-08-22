#include <stdio.h>
int main(void) {
int n;
scanf("%i", &n);
int t = 1.08 * n;
if(t < 206) {
printf("Yay!");
} else if(t == 206) {
printf("so-so");
} else {
printf(":(");
}
return 0;
}
