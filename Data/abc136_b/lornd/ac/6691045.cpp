#include <cstdio>
int n, cnt, ans;
int num[6] = {0, 9, 90, 900, 9000, 90000};
int NumerofDigits(int key) {
int tmp = 0;
while(key) {
key /= 10;
++tmp;
}
return tmp;
}
int main() {
scanf("%d", &n);
cnt = NumerofDigits(n);
for (int i = 1; i < cnt; i += 2) {
ans += num[i];
}
if (cnt == 5)
ans += (n - 10000 + 1);
else if (cnt == 3)
ans += (n - 100 + 1);
else if (cnt == 1)
ans += n;
printf("%d", ans);
}
