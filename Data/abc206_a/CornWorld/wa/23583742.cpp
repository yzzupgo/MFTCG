#include <cstdio>
int n;
int main() {
scanf("%d", &n);
if(n < 191) {
printf("Yey!");
} else if(n == 191) {
printf("so-so");
} else {
printf(":(");
}
return 0;
}
