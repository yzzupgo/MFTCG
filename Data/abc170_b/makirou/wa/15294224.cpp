#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define printInt(a) printf("%d\n", a)
#define scanInt(a) scanf("%d", &a)
#define scan2Int(a,b) scanf("%d %d", &a, &b)
#define scan3Int(a,b,c) scanf("%d %d %d", &a, &b, &c)
using namespace std;
int main() {
int x, y;
scan2Int(x, y);
if ((y-x*2)/2 <= x)
printf("Yes\n");
else
printf("No\n");
return 0;
}
