#include <bits/stdc++.h>
using namespace std;
int n;
void read(int &x) {
int f = 1;
x = 0;
char ch = getchar();
while(ch < '0' || ch > '9') {
if(ch == '-') {
f = -1;
}
ch = getchar();
}
while(ch >= '0' && ch <= '9') {
x = (x << 1) + (x << 3) + (ch ^ 48);
ch = getchar();
}
x *= f;
}
int main() {
read(n);
double ans = double(n) * 1.08;
if(ans < 206) {
puts("Yay!");
} else if(ans == 206) {
puts("so-so");
} else {
puts(":(");
}
return 0;
}
