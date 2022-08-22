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
if(X==a+b && a>0 && b>0) cout << "Yes" << endl;
else cout << "No" << endl;
return 0;
}
