#include <stdio.h>
int main() {
int N;
scanf("%d", &N);
int tax = N * 1.08 ;
if(tax < 206) {
puts("Yay!");
} else if(tax > 206) {
puts(":(");
} else if(tax = 206) {
puts("so-so");
}
return 0;
}
