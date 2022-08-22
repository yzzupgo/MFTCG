#include <stdio.h>
int main()
{
int n, i, ans = 0;
int a[3] = {1, 100, 10000}, b[3] = {9, 999, 99999};
scanf("%d", &n);
for(i = 0; i < 3; i++){
if(b[i] < n) ans += b[i] - a[i] + 1;
else{
if(n >= a[i]) ans += n - a[i] + 1;
break;
}
}
printf("%d\n", ans);
return 0;
}
