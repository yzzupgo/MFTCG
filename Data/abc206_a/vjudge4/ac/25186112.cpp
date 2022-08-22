#include <stdio.h>
int main() {
int a;
scanf("%d", &a);
if(int(a * 1.08) < 206) {
printf("Yay!");
} else if(int(a * 1.08) > 206) {
printf(":(");
} else if(int(a * 1.08) == 206) {
printf("so-so");
}
return 0;
}
