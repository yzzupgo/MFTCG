#include <bits/stdc++.h>
using namespace std;
int main(){
int a, b;
scanf("%d %d", &a, &b);
b -= 2 * a;
if (b < 0 || b & 1)
puts("No");
else
puts("Yes");
return 0;
}
