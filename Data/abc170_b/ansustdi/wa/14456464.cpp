#include <bits/stdc++.h>
using namespace std;
int main(){
int a, b;
scanf("%d %d", &a, &b);
b -= 2 * a;
if (b & 1 || b < 0)
puts("No");
else {
if (b > 2 * a)
puts("Yes");
else
puts("No");
}
return 0;
}
