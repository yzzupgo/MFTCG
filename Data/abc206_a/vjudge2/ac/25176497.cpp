#include <stdio.h>
int main() {
float N;
scanf("%f", &N);
if(N >= 1 && N <= 300) {
int x = 1.08 * N ;
if(x < 206) {
printf("Yay!");
} else if(x == 206) {
printf("so-so");
} else {
printf(":(");
}
}
return 0;
}
