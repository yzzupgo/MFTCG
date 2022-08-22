#include <cstdio>
int n;
int main() {
scanf("%d", &n);
if(n < 191) {
printf("Yay!\n");
} else if(n == 191) {
printf("so-so\n");
} else {
printf(":(\n");
}
return 0;
}
