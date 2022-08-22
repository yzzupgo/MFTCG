#include <iostream>
using namespace std;
int main() {
int a;
int b;
cin>>a;
cin>>b;
int c = 0;
if (b > (a * 4) || a != a / 2 * 2 || b < a * 2)
{
c++;
}
if (c >= 1)
{
cout<<"No";
}
else
{
cout<<"Yes";
}
return 0;
}
