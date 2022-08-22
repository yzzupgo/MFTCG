#include<bits/stdc++.h>
using namespace std;
double n;
int main() {
cin >> n;
n = n * 1.08;
int now = (int)floor(n);
if(206 == now) {
printf("so-so");
} else {
if(now > 206) {
printf(":(");
} else {
printf("Yay!");
}
}
return 0;
}
