#include <iostream>
using namespace std;
int main()
{
int A , B ;
cin >> A >> B ;
if ( A >= 13 && B %2 == 0 )
cout << B ;
else if ( A >=6 && A <= 12 && B %2 == 0 )
cout << 0.5 * B ;
else if ( A <= 5 && B %2 == 0 )
cout << 0 ;
return 0;
}
