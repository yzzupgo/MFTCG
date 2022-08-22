# include <stdio.h>
# include <string.h>
int main(void) {
int N;
scanf("%d", &N);
int x;
x = 1.08 * N;
if(x < 206) {
printf("Yay!");
} else if(x == 206) {
printf("so-so");
} else if(x > 206) {
printf(":(");
}
return 0;
}
