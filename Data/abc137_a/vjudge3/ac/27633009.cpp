#include <iostream>
using namespace std;
int main()
{
int A , B , c , d , e;
cin>>A>>B;
c=A+B;
d=A-B;
e=A*B;
if(c>=d && c>=e)
cout<<c;
else if(d>=c && d>=e)
cout<<d;
else
cout<<e;
return 0;
}
