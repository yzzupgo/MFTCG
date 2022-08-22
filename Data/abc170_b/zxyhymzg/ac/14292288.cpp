#include<bits/stdc++.h>
using namespace std;
#ifdef FIO
const int S = 1 << 21;
char p0[S],*p1,*p2;
#ifndef ZXY
#define getchar() (p2 == p1 && (p2 = (p1 = p0) + fread(p0,1,S,stdin)) == p1 ? EOF : *p1++)
#endif
inline int read() {
static int x,c;x = 0;
do{c = getchar();}while(!isdigit(c));
do{x = (x << 3) + (x << 1) + (c & 15);c = getchar();}while(isdigit(c));
return x;
}
#endif
int a,b;
int main() {
cin >> a >> b;
if(2*a <= b && b <= 4*a && b % 2 == 0) puts("Yes");
else puts("No");
return 0;
}
