# include <iostream>
# include <set>
#include <algorithm>
#include <math.h>
# include<map>
typedef long long ll;
using namespace std;
ll rem(ll num, ll a) {
while (num >= a) {
num -= a;
}
return num;
}
int main() {
int a;
scanf("%d", &a);
int one=0, three=0, five=0;
if (a > 0) {
one = min(9, a);
}
if (a > 99) {
three = min(999, a)-100+1;
}
if (a > 9999) {
five = min(99999, a)-10000+1;
}
cout << one+three+five << endl;
return 0;
}
