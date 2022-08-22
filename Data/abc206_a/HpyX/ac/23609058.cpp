#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
inline ll read() {
ll x = 0, f = 1;
char ch = getchar();
while(!isdigit(ch)) {
if(ch == '-') {
f = -f;
}
ch = getchar();
}
while(isdigit(ch)) {
x = (x << 1) + (x << 3) + (ch ^ 48);
ch = getchar();
}
return x * f;
}
inline void write(ll x) {
if(x < 0) {
putchar('-'), x = -x;
}
if(x > 9) {
write(x / 10);
}
putchar(x % 10 + '0');
}
inline void writeln(ll x) {
write(x), putchar('\n');
}
ll n;
int main() {
n = read();
ll zz = floor(1.08 * n);
if(zz < 206) {
puts("Yay!");
} else if(zz == 206) {
puts("so-so");
} else {
puts(":(");
}
return 0;
}
