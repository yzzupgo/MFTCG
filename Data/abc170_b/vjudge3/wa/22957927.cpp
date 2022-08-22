#include <iostream>
using namespace std;
int main() {
int a, b, c, d, e, f;
bool bb = false;
scanf("%d %d", &a, &b);
if(
(b&1) == 0
&& (b/4) <= a
&& (b/2) >= a
){
bb = true;
}
printf("%s\n", bb ? "Yes" : "No");
return 0;
}
