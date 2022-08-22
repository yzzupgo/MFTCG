#include <iostream>
using namespace std;
int main()
{
int A,B;
cin>>A;
cin>>B;
if(A>=13)
cout<<B;
if(A>=6&&A<=12)
cout<<B/2;
if(A<=5)
cout<<0;
return 0;
}
