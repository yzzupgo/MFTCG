#include <iostream>
using namespace std;
int main()
{
int a,b,l;
cin >> a >> b;
l=a*b;
if((a+b)>l)
l=a+b;
else if((a-b)>l)
l=a-b;
cout << l << "\n";
return 0;
}
