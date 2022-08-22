#include <iostream>
using namespace std;
int x,y;
int main()
{
cin >> x >> y;
if ( x*2 <= y && x*4 >= y && y%2 == 0 ) cout << "Yes";
else cout << "No";
}
