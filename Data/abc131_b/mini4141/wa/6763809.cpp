#include <bits/stdc++.h>
using namespace std;
int main() {
int n, l;
scanf("%d %d", &n, &l);
l--;
if (1 + l <= 0 && 0 <= n + l)
return puts("0"), 0;
int first = 1 + l, last = n + l;
printf("%d\n", n * (first + last) / 2 - (first < 0 ? last : first));
return 0;
}
