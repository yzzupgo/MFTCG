#include <iostream>
using namespace std;
int main()
{
int a=1, b, c=0, x, y;
cin >> x >> y;
for (int i=1; i<=x; i++)
{
b=2*a+4*(x-a);
if(b==y)
{
c++;
cout << "Yes";
break;
}
else
{
a++;
continue;
}
}
if (c==0)
cout << "No";
return 0;
}
