#include <iostream>
using namespace std;
int main() {
int n;
cin >> n;
int m;
int keta = 0;
m = n;
while (m > 0) {
keta++;
m /= 10;
}
switch (keta) {
case 1:
cout << n << endl;
break;
case 2:
cout << 9 << endl;
break;
case 3:
cout << n - 99 + 9 << endl;
break;
case 4:
cout << 900 + 9 << endl;
break;
case 5:
cout << n - 9999 + 900 + 9 << endl;
break;
}
return 0;
}
