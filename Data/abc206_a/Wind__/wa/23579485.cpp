#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main() {
int n;
scanf("%d", &n);
double a = n * 1.08;
if(a == 206) {
printf("so-so");
} else if(a > 206) {
printf(":(");
} else {
printf("Yay!");
}
return 0;
}
