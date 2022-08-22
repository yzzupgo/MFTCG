#include <bits/stdc++.h>
using namespace std;
int main(void) {
int x, y;
scanf("%d%d", &x, &y);
while(x) {
if(y > 4) {
y -= 4;
} else {
y -= 2;
}
x--;
}
if(x == 0 && y == 0) {
printf("Yes\n");
} else {
printf("No\n");
}
return 0;
}
