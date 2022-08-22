#include<bits/stdc++.h>
using namespace std;
int main() {
double n;
scanf("%lf", &n);
double k = n * 1.08;
if(k < 206) {
puts("Yay!");
} else if(k == 206) {
puts("so-so");
} else {
puts(":(");
}
return 0;
}
