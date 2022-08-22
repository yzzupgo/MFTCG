#include <stdio.h>
int main() {
int a, b;
scanf("%d", &a);
b = (a * 108) / 100;
if(b < 206) {
puts("Yay!");
} else if(b == 206) {
puts("so-so");
} else if(b > 206) {
puts(":(");
}
}
