#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
int a, b, ans;
cin >> a >> b;
cout << max({a+b,a-b,a*b}) << endl;
return 0;
}
