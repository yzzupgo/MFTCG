#include <bits/stdc++.h>
#define REP(i,a,b) for (long long i = a; i <= b; ++i)
#define ll long long
using namespace std;
ll a, b;
inline ll read(){
ll s = 0, w = 1;
char ch = getchar();
for (; ch < '0' || ch > '9'; ch = getchar()) w *= ch == '-' ? -1 : 1;
for (; ch >= '0' && ch <= '9'; ch = getchar()) s = s * 10 + ch - '0';
return s * w;
}
inline void work(){
a = read(), b = read();
if (b % 2 == 0 || b > a * 4){
puts("No");
exit(0);
}
REP(i, 0, a)
if (i * 2 + (a - i) * 4 == b){
puts("Yes");
exit(0);
}
puts("No");
}
int main(){
work();
return 0;
}
