#include<iostream>
using namespace std;
int main() {
int a,b,x,y,z,i;
cin >> a >> b;
for (i = 0; i <= a; i++) {
x = i;
y = a - x;
z = 4 * x + 2 * y;
if (b == z) {
cout << "yes";
break;
}else if (b != z && i==a) {
cout << "no";
}
}
return 0;
}
