#include <stdio.h>
int main() {
int N;
scanf("%d", &N);
if(int(N * 1.08) < 206) {
puts("Yay!");
} else if(int(N * 1.08) > 206) {
puts(":(");
} else {
puts("so-so");
}
return 0;
}
