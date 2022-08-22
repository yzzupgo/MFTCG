#include <stdio.h>
int main(void) {
int i, n, ans = 0;
scanf("%d", &n);
for(i = 1; i < 10; ++i) if(i < n) ++ans;
for(i = 100; i < 1000; ++i) if(i < n) ++ans;
for(i = 10000; i < 100000; ++i) if(i < n) +ans;
printf("%lld", ans);
return 0;
}
