#include <stdio.h>
int main() {
int N;
float tax;
scanf("%d", &N);
tax = 1.08 * N;
if(tax < 206) {
puts("Yay!");
} else if(tax == 206) {
puts("so-so");
} else {
puts(":(");
}
}
