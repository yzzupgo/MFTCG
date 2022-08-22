#include <stdio.h>
#include <string.h>
int main() {
int actualPrice, totalPrice;
scanf("%d", &actualPrice);
totalPrice = actualPrice * 1.08;
if(totalPrice == 206) {
puts("so-so");
} else if(totalPrice > 206) {
puts(":(");
} else {
puts("Yay!");
}
return 0;
}
