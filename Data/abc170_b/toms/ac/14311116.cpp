#include <cstdio>
using namespace std;
int x;
int y;
void solve() {
if (x == 100 || y == 1) {
printf("No\n");
return;
}
for (int i=0;i<=x;i++) {
int foot = i*2+(x-i)*4;
if (foot == y) {
printf("Yes\n");
return;
}
}
printf("No\n");
return;
}
int main() {
scanf("%d", &x);
scanf("%d", &y);
solve();
}
