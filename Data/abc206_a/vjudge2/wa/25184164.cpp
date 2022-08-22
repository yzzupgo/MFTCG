#include<stdio.h>
int main() {
int a;
scanf("%d", &a);
if(a * 1.08 < 206) {
puts("Yay!");
} else if(a * 1.08 == 206) {
puts("so-so");
} else {
puts(":(");
}
return 0;
}
