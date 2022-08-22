#include <iostream>
using namespace std;
int main(void){
int X, Y;
int XX, YY, a, b;
cin >> X >> Y;
XX = X * 2;
YY = Y / 2;
a = XX - YY;
b = YY - X;
if(a>=0 && b>=0 && X==a+b) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
