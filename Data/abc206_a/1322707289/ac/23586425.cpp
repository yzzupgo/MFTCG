#include <iostream>
#include <cstdio>
using namespace std;
const int N = 100010;
int n;
int main(void) {
scanf("%d", &n);
int t = n * 1.08;
if(t < 206) {
puts("Yay!");
} else if(t == 206) {
puts("so-so");
} else {
puts(":(");
}
return 0;
}
