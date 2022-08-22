#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
int x;
scanf("%d", &x);
double y = 206;
if(y > x * 1.08) {
printf("Yay!");
} else if(x * 1.08 == y) {
printf("so-so");
} else {
printf(":(");
}
}
