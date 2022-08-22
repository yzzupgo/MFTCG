#include <bits/stdc++.h>
using namespace std;
int main(){
int x, y;
scanf("%d%d", &x, &y);
if (2 * x > y) printf("No");
else if (4 * x < y) printf("No");
else if (y % 2 == 1) printf("No");
else printf("Yes");
return 0;
}
