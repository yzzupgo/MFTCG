#include <cstdio>
#include <algorithm>
using namespace std;
#define MAXN 5
int s[MAXN + 5];
int main () {
int n, m;
scanf ("%d %d", &n, &m);
if (m & 1) {
printf ("No");
return 0;
}
if ((m - 2 * n) < 0) {
printf ("No");
return 0;
}
if (n - (m - 2 * n) / 2 < 0) {
printf ("No");
return 0;
}
printf ("Yes");
return 0;
}
