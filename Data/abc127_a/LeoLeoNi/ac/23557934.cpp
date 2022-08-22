#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
#define rep(i,x,n) for (int i = x; i < (n); ++i)
using namespace std;
using ll = long long;
int main()
{
int a = 0, b = 0;
cin >> a >> b;
if (a <= 5)
{
cout << 0;
}
else if (6 <= a && a <= 12)
{
cout << b / 2;
}
else
{
cout << b;
}
return 0;
}
