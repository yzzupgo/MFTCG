#include <stdio.h>
int main() {
int N;
scanf("%d", &N);
float x = 1.08 * N;
if(x < 206) {
puts("Yay!");
} else if(x = 206) {
puts("so-so");
} else if(x > 206) {
puts(":(");
}
return 0;
}
