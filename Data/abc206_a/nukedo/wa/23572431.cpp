#include <bits/stdc++.h>
using namespace std;
int main() {
double x;
scanf("%lf", &x);
x *= 1.08;
if(x == 206) {
printf("so-so\n");
} else if(x > 206) {
printf(":(\n");
} else {
printf("Yay!\n");
}
}
