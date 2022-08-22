#include<stdio.h>
#include<stdlib.h>
#include<string>
using namespace std;
int main() {
double N, gain, out;
gain = 1.08;
scanf("%d", &N);
out = N * gain;
if(out > 207) {
printf(":(\n");
} else if(out < 206) {
printf("Yay!\n");
} else {
printf("so-so\n");
}
return 0;
}
