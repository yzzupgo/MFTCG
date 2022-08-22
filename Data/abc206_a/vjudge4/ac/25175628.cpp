#include <stdio.h>
int main() {
int yen;
double priceWithTax;
scanf("%d", &yen);
priceWithTax = 1.08 * yen;
if(priceWithTax < 206) {
puts("Yay!");
} else if((int) priceWithTax == 206) {
puts("so-so");
} else {
puts(":(");
}
return 0;
}
