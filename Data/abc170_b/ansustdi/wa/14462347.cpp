#include <bits/stdc++.h>
using namespace std;
int main(){
int a, b;
scanf("%d %d", &a, &b);
b -= a * 2;
if (b & 1 || b <= 0 || b > 2 * a)
puts("No");
else
puts("Yes");
return 0;
}
