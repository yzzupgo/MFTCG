#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<cmath>
#include<string>
#include<cstdlib>
using namespace std;
int main()
{
int A, B;
cin >> A >> B;
int a=A+B;
int b=A-B;
int c=A*B;
if(a<b)
{
if(b<c)
cout << c << endl;
else
cout << b << endl;
}
else if(b<c)
{
if(a<c)
cout << c << endl;
else
cout << a << endl;
}
else if(c<a)
{
if(b<a)
cout << a << endl;
else
cout << b << endl;
}
return 0;
}
