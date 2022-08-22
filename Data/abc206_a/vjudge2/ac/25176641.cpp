#include <stdio.h>
int main() {
int price;
double n, t = 1.08;
scanf("%lf", &n);
price = n * 1.08;
if(price < 206) {
puts("Yay!");
} else if(price > 206) {
puts(":(");
} else if(price == 206) {
puts("so-so");
}
return 0;
}
