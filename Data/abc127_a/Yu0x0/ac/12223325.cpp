#include <iostream>
#include <list>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; i++)
int main()
{
int a, b;
cin >> a >> b;
if (a > 12)
{
cout << b << endl;
}
else if (a > 5)
{
cout << b / 2 << endl;
}
else
{
cout << 0 << endl;
}
}
