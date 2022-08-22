#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
double n;
scanf("%lf", &n);
int ans = (int)(n * 1.08);
if(ans == 206) {
printf("so-so");
} else if(ans > 206) {
printf(":(");
} else {
printf("Yay!");
}
return 0;
}
