#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int a, b;
cin >> a >> b;
int plus, mins, mult;
plus =a+b;
mins=a-b;
mult=a*b;
int x;
x=max(plus,mins);
cout<<max(x,mult)<<endl;
return 0;
}
