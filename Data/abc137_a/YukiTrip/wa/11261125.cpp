#include<iostream>
using namespace std;
int main()
{
int A,B,Z,O,M;
cin >> A >> B;
Z=A+B;
O=A-B;
M=A*B;
if (Z>O and Z>M)
cout << Z;
else if (O>M and O>Z)
cout << O;
else
cout << M;
}
