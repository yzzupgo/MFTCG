#include<stdio.h>
int main() {
int N;
scanf("%d", &N);
int harga;
int max = 206;
harga = 1.08 * N;
if(harga == max) {
puts("so-so");
} else if(harga < max) {
puts("Yay!");
} else if(harga > max) {
puts(":(");
}
return 0;
}
