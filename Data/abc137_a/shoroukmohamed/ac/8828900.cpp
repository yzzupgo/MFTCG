#include <iostream>
using namespace std;
int main()
{
long long a,b;
cin>>a>>b;
if(a+b>=a-b && a+b>=a*b)
cout<<a+b;
else if (a-b>=a+b && a-b>=a*b)
cout<<a-b;
else if (a*b>=a+b && a*b>=a-b)
cout<<a*b;
return 0;
}
