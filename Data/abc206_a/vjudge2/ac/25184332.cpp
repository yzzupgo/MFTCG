#include<stdio.h>
int main() {
int n;
scanf("%d", &n);
n = n * 1.08;
if(n < 206) {
puts("Yay!");
} else if(n == 206) {
puts("so-so");
} else if(n > 206) {
puts(":(");
}
return 0;
}
