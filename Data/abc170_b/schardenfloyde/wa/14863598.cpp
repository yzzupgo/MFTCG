#include <iostream>
using namespace std;
int main(void){
int x, y;
cin >> x >> y;
int a = y / 4;
int b = a / 2;
int ab = a + b;
int aa = y /2;
int bb = aa/ 4;
int aabb = aa + bb;
if ( ab == x )
{
cout << "Yes" << endl;
}
else if ( aabb == x)
{
cout << "Yes" << endl;
}
else
{
cout << "No" << endl;
}
}
