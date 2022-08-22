#include <iostream>
using namespace std;
int main()
{
int A,B;
cin >> A >> B;
B = ( A < 13 )? B / 2 : B;
B = ( A < 5 )? 0 : B;
cout << B << endl;
return 0;
}
