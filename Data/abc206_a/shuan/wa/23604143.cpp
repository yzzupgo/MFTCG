#include <cstdio>
int main() {
int N = 0, S = 206;
float tax = 1.08;
scanf("%d", &N);
int X = N * tax;
if(X <= S) {
printf("Yay!");
} else if(X >= S) {
printf(":(");
} else {
printf("so-so");
}
}
