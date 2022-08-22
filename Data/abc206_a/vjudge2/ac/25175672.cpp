#include <stdio.h>
int main() {
int n;
scanf("%d", &n);
int harga = n * 1.08;
if(harga > 206) {
puts(":(");
} else if(harga < 206) {
puts("Yay!");
} else if(harga == 206) {
puts("so-so");
}
return 0;
}
