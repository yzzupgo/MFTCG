#include <stdio.h>
int main() {
int N;
scanf("%d", &N);
float a = N * 1.08;
if(a < 206) {
puts("yay");
} else if((int)a == 206) {
puts("so-so");
} else {
puts(":(");
}
return 0;
}
