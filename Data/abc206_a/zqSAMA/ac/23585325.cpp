#include<bits/stdc++.h>
using namespace std;
int main() {
double n;
scanf("%lf", &n);
if((int)(n * 1.08) < 206) {
puts("Yay!");
} else if((int)(n * 1.08) == 206) {
puts("so-so");
} else if((int)(n * 1.08) > 206) {
puts(":(");
}
return 0;
}
