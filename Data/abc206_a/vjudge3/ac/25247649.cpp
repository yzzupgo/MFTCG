#include <stdio.h>
int main() {
int N;
scanf("%d", &N);
if(int(N * 1.08) < 206) {
puts("Yay!");
} else if(int(N * 1.08) == 206) {
puts("so-so");
} else if(int(N * 1.08) > 206) {
puts(":(");
}
return 0;
}
