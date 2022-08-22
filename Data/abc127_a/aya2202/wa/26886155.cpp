#include <iostream>
using namespace std;
int main()
{
int A , B, C ;
cin >> A >> B ;
C = B %2 ;
if ( A >= 13 && C == 0 )
cout << B ;
else if ( A <=16 && A >= 12 && C == 0 )
cout << 0.5 * B ;
else if ( A <= 5 && C == 0 )
cout << "0" ;
return 0;
}
