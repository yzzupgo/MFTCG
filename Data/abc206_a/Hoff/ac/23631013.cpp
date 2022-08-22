#include <bits/stdc++.h>
#define N 200000
#define MAX 1000000000
#define E 0.00000001
#define MOD 1000000007
#define INF 0x3f3f3f3f
#define LEFT(x) (2 * x)
#define RIGHT(x) (2 * x + 1)
#define PAR 0
#define IMPAR 1
using namespace std;
int main() {
int x;
scanf("%d", &x);
if(floor(x * 1.08) > 206) {
printf(":(\n");
} else if(floor(x * 1.08) < 206) {
printf("Yay!\n");
} else {
printf("so-so\n");
}
return 0;
}
