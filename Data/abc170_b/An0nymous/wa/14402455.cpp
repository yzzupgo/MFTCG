#include <iostream>
using namespace std;
int main()
{
int x, y;
cin >> x >> y;
if (y >= x*2 && y <= x*4 && y%2==0){
cout << "yes";
} else {
cout << "no";
}
return 0;
}
