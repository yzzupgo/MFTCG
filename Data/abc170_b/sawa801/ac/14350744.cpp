#include<iostream>
using namespace std;
int main()
{
int a,b;
cin >> a >> b;
if( 2*a <= b && 4*a >= b && b%2==0 )
cout << "Yes";
else
cout << "No";
return 0;
}
