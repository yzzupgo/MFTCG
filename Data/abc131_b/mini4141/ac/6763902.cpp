#include <bits/stdc++.h>
using namespace std;
int main() {
int n, l;
scanf("%d %d", &n, &l);
l--;
int first = 1 + l, last = n + l;
if (1 + l <= 0 && 0 <= n + l)
return printf("%d\n", n * (first + last) / 2), 0;
printf("%d\n", n * (first + last) / 2 - (first < 0 ? last : first));
return 0;
}
