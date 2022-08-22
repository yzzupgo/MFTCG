#include<bits/stdc++.h>
#define int long long
#define mem(x,y) memset(x,y,sizeof(x))
using namespace std;
int read() {
int s = 0, w = 1;
char ch = getchar();
while(ch < '0' || ch > '9') {
if(ch == '-') {
w = -1;
}
ch = getchar();
}
while(ch >= '0' && ch <= '9') {
s = s * 10 + ch - '0', ch = getchar();
}
return s * w;
}
void out(int N) {
if(N < 0) {
putchar('-');
N = -N;
}
if(N >= 10) {
out(N / 10);
}
putchar(N % 10 + '0');
}
double n;
signed main() {
cin >> n;
n = n * 1.08;
if(n == 206) {
puts("so-so");
}
if(n > 206) {
puts(":(");
} else {
puts("Yay!");
}
}
