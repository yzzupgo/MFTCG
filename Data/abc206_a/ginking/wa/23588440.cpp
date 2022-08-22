#include <iostream>
#include <cstdio>
using namespace std;
int main() {
double x;
scanf("%lld", &x);
x *= 1.08;
if(206 > x) {
printf("Yay!");
} else if(x == 206) {
printf("so-so");
} else {
printf(":)");
}
}
