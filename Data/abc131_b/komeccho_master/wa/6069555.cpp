#include <iostream>
#include<vector>
using namespace std;
#define rpt(i,n) for(i = 0; i < (n); i++)
typedef long long ll;
int main(void) {
int n, l, a[100], i, s = 0, flag = 0;
cin >> n >> l;
rpt(i, n) {
a[i] = l + i;
}
rpt(i, n) {
s += a[i];
}
rpt(i, n) {
if (a[i] == 0) {
cout << s;
flag = 1;
break;
}
}
if (flag == 0) {
s -= a[0];
cout << s;
}
return 0;
}
