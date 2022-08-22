#include<iostream>
using namespace std;
int main()
{
int a,b;
cin >> a >> b;
if(a<6)
cout << 0;
if(6<=a<=12)
cout << b/2;
if(a>=13)
cout << b;
return 0;
}
