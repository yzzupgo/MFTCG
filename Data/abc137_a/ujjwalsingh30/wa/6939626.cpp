#include <iostream>
using namespace std;
int main()
{
int A,B,l;
l=0;
cin >> A >> B;
l=A*B;
if((A+B)>l)
l=A+B;
else if((A-B)>l)
l=A-B;
cout << l;
return 0;
}
