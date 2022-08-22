#include <iostream>
using namespace std;
int main(void){
int x, y;
cin >> x >> y;
int a, b;
for ( int i = 0; i < x; ++i)
{
a = i * 2 + ( x - i) * 4;
if ( a == y)
{
cout << "Yes" << endl;
break;
}
b = i * 4 + ( x - 1) * 2;
if( b == y)
{
cout << "Yes" << endl;
break;
}
}
if ( a != y)
{
cout << "No" << endl;
}
else if ( b != y)
{
cout << "No" << endl;
}
}
