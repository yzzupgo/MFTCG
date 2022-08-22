#include <iostream>
using namespace std;
int main()
{
int A, B ;
cin >> A>> B;
if (A+B >A-B &&A+B>A*B)
cout << A+B ;
if (A-B>A+B && A-B>A*B)
cout << A-B;
if (A*B>A+B &&A*B>A-B )
cout <<A*B ;
return 0;
}
