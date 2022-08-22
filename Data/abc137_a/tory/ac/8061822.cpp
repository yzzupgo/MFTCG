#include <iostream>
using namespace std;
int a, b, c, d, e;
int main()
{
cin >> a >> b;
c = a + b;
d = a - b;
e = a * b;
if (c >= d && c >= e) {
cout << c;
} else if (d >= c && d >= e) {
cout << d;
} else {
cout << e;
}
return 0;
}
