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
long long A, B;
cin >> A >> B;
long long a=A+B;
long long b=A-B;
long long c=A*B;
if(a<b)
{
if(b<c)
cout << c << endl;
else
cout << a << endl;
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
