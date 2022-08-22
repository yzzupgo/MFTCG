#include <stdio.h>
int main() {
int N;
scanf("%d", &N);
int harga = 1.08 * N;
if(harga < 206) {
printf("Yay!");
} else if(harga == 206) {
printf("so-so");
} else if(harga > 206) {
printf(":(");
}
}
