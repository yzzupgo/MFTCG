#include <iostream>
using namespace std;
int main( ) {
int a , b ;
cin >> a>> b ;
int n1= a +b ;
int n2 = a - b ;
int n3 = a * b ;
if( n1 >= n2 && n1 >= n3 )
cout << n1;
else if ( n2>=n1 && n2>=n3 )
cout << n2 ;
else
cout << n3 ;
return 0 ;
}
