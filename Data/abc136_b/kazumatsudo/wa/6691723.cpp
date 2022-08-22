#include<iostream>
using namespace std;
int main()
{
int a;
cin >> a;
if (a < 9) {
cout << a << endl;
} else if (a < 100) {
cout << 9 << endl;
} else if (a < 1000) {
int a100 = a - 100;
cout << 10 + a100 << endl;
} else if (a < 10000) {
cout << 909 << endl;
} else if (a < 10000) {
int a10000 = a - 10000;
cout << 910 + a10000 << endl;
} else {
cout << 90909 << endl;
}
return 0;
}
