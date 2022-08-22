#include<stdio.h>
int main() {
int a;
scanf("%d", &a);
int c = a * 1.08;
if(c > 206) {
puts(":c");
} else if(c < 206) {
puts("Yay !");
} else if(c = 206) {
puts("so-so");
}
}
