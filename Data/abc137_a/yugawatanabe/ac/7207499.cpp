#include <bits/stdc++.h>
using namespace std;
int main() {
int A,B,a,b,c;
cin >> A >> B;
a=A+B;
b=A-B;
c=A*B;
if(a>=b && a>=c)
cout << a << endl;
else if(b>=a && b>=c)
cout << b << endl;
else if(c>=a && c>=b)
cout << c << endl;
}
