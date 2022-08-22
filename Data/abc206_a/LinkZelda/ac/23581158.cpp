#include<cstdio>
#include<cmath>
#include<ctype.h>
#include<algorithm>
using namespace std;
inline int read() {
int x = 0, f = 1;
char ch = getchar();
while(!isdigit(ch)) {
if(ch == '-') {
f = -1;
}
ch = getchar();
}
while(isdigit(ch)) {
x = x * 10 + ch - '0';
ch = getchar();
}
return x * f;
}
signed main() {
int n = read();
if((n * 108 / 100) < 206) {
printf("Yay!\n");
} else if((n * 108 / 100) > 206) {
printf(":(\n");
} else {
printf("so-so\n");
}
return 0;
}
