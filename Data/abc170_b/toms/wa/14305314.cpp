#include <cstdio>
using namespace std;
int x;
int y;
void solve() {
for (int i=0;i<=x;i++) {
for (int j=0;j<=x-i;j++) {
int foot = i*2+j*4;
if (foot == y) {
printf("Yes\n");
return;
}
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
