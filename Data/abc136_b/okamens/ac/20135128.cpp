#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define stp(var,init,end) for (auto var = init; var < end; ++var)
#define ll long long
int main(void)
{
int n;
cin >> n;
if (n < 10)
{
cout << n;
}
else if (n < 100)
{
cout << 9;
}
else if (n < 1000)
{
cout << 9 + n - 99;
}
else if (n < 10000)
{
cout << 909;
}
else if (n < 100000)
{
cout << 909 + n - 9999;
}
else
{
cout << 90909;
}
return 0;
}
