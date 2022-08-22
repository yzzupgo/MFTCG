#include<iostream>
using namespace std;
int main(void) {
int x, y;
float a, b;
cin >> x >> y;
a =(4*x-y) / 2;
b = (y - 2 * x) / 2;
if (((a + b) == x)&&(a>=0&&b>=0) ){
cout << "Yes";
}
else {
cout << "No";
}
return 0;
}
