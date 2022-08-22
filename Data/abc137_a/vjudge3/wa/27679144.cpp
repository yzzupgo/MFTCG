#include <iostream>
using namespace std;
int main()
{
int x , y;
cin>> x >> y;
int max = 0;
max = x + y;
if ( max < x - y )
max = x- y;
else if ( max < x* y)
max = x*y;
cout<< (max);
}
