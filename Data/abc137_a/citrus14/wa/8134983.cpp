#include<iostream>
using namespace std;
int main(){
int a = 0, b = 0, A = 0, B = 0, C = 0;
cin >> a >> b;
A = a + b;
B = a - b;
C = a * b;
if (A > B > C || A > C > B)
{
cout << A << endl;
return 0;
}
if (B > A > C || B > C > A)
{
cout << B << endl;
return 0;
}
if (C > A > B || C > B > A)
{
cout << C << endl;
return 0;
}
}
