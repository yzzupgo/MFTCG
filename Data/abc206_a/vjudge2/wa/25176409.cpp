#include <stdio.h>
int main() {
int N;
scanf("%d", &N);
int h = 206;
int a = N * 1.08;
if(a < h) {
puts(":(");
} else if(a == h) {
puts("so-so");
} else {
puts("yay");
}
return 0;
}
