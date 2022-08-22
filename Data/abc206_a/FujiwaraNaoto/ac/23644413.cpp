#include<stdio.h>
int main() {
int N;
scanf("%d", &N);
int price = N * 1.08;
if(price < 206) {
printf("Yay!\n");
} else if(price > 206) {
printf(":(\n");
} else {
printf("so-so\n");
}
return 0;
}
