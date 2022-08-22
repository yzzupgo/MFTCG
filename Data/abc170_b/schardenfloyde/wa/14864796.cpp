#include <iostream>
using namespace std;
int main(void){
int x, y;
cin >> x >> y;
int a;
for ( int i = 0; i < x; ++i)
{
a = i * 2 + ( x - i + 1 ) * 4;
if ( a == y)
{
cout << "Yes" << endl;
break;
}
}
if ( a != y)
{
cout << "No" << endl;
}
}
