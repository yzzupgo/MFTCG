#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
int x,y;
cin >> x >> y;
if (x > 4*y || y%2==1)
{
cout << "No";
}
else
cout << "Yes";
return 0;
}
