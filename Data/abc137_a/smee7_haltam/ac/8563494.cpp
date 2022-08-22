#include <iostream>
using namespace std;
int main ()
{
int x ;
int z;
cin >> x>>z;
if (x*z>=x-z&&x*z>=x+z){
cout << x*z;
}
else if (x-z>=x*z&&x-z>=z+x){
cout << x-z;
}
else if (x+z>=x-z&&x+z>=x*z)
cout << x+z;
return 0;
}
