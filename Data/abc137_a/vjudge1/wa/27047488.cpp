#include <iostream>
using namespace std;
int main()
{
int a, b;
cin >> a >> b;
if(a > 0 && b > 0 || a < 0 && b < 0 )
cout << a * b << endl;
else if(a > 0 && b < 0 )
cout << a - b << endl;
else
cout << a + b << endl;
return 0;
}
