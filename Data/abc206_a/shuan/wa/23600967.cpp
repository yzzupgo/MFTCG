#include <cstdio>
int main() {
int N = 0, S = 206;
float tax = 1.08;
scanf(" %d", &N);
if(N * tax <= S) {
printf("Yay!");
} else if(N * tax >= S) {
printf(":(");
} else if(N * tax == S) {
printf("so-so");
}
}
