#include<stdio.h>
int main() {
int a;
scanf("%d", &a);
if(int(a * 1.08 < 206)) {
puts("Yay!");
} else if(int(a * 1.08 > 206)) {
puts(":(");
} else {
puts("so-so");
}
return 0;
}
