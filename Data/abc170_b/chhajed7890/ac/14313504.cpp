#include <iostream>
using namespace std;
int main()
{
int x, y;
cin >> x >> y;
if(y%2!=0)
cout << "No";
else if((y/2 - x) < 0 || 2*x - (y/2) < 0)
cout << "No";
else
cout << "Yes";
return 0;
}
