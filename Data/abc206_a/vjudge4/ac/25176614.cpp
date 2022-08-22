#include <stdio.h>
#include <string.h>
int main() {
int a, b, t;
scanf("%d", &a);
b = a * 1.08;
t = b;
if(t < 206) {
printf("Yay!");
} else if(t > 206) {
printf(":(");
} else if(t == 206) {
printf("so-so");
}
return 0;
}
