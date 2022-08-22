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
else if(c<b)
cout << b << endl;
}
else if(b<a)
{
if(a<c)
cout << c << endl;
else
cout << a << endl;
}
return 0;
}
