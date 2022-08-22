#include <stdio.h>
int main() {
int N;
int tax;
scanf("%d", &N);
tax = 1.08 * N;
if(tax < 206) {
puts("Yay!");
} else if(tax == 206) {
puts("so-so");
} else if(tax > 206) {
puts(":(");
}
}
