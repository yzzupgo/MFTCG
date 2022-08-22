#include<ctime>
#include<cstdio>
#include<cctype>
using namespace std;
int read() {
char c;
int x = 0, f = 1;
while(!isdigit(c = getchar())) {
f -= 2 * (c == '-');
}
while(isdigit(c)) {
x = x * 10 + (c - 48) * f;
c = getchar();
}
return x;
}
int x;
int main() {
#ifndef ONLINE_JUDGE
freopen("A.in", "r", stdin);
freopen("A.out", "w", stdout);
#endif
clock_t t1 = clock();
x = read() * 1.08;
if(x < 206) {
puts("Yay!");
} else if(x == 206) {
puts("so-so");
} else {
puts(":)");
}
clock_t t2 = clock();
fprintf(stderr, "time:%0.3lfs", 1.0 * (t2 - t1) / CLOCKS_PER_SEC);
return 0;
}
