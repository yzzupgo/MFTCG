#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
int x,y;
cin >> x >> y;
if (4*x < y || y%2==1 || 2*x > y)
{
cout << "No";
}
else
cout << "Yes";
return 0;
}
