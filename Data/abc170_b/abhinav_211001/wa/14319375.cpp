#include <iostream>
#include <string>
using namespace std;
int main()
{
int x,y;
cin >> x >> y;
if((y<=4*x) && (y%2==0))
{
cout << "Yes";
}
else
{
cout << "No";
}
return 0;
}
