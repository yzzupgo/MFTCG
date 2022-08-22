#include <stdio.h>
int main() {
int n, taxes;
float tax;
scanf("%d", &n);
tax = (float)(n * 1.08);
taxes = (int)(tax);
if(taxes < 206) {
printf("Yay!");
} else if(taxes == 206) {
printf("so-so");
} else if(taxes > 206) {
printf(":(");
}
}
