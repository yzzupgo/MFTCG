#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
scanf("%d", &n);
if((int)(n * 1.08) == 206) {
puts("so-so");
} else {
puts((int)(n * 1.08) == 206 ? ":(" : "Yay!");
}
return 0;
}
