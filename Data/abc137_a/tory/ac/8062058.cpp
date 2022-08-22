#include <iostream>
#include <algorithm>
using namespace std;
int a, b, c;
int main()
{
cin >> a >> b ;
cout << max({a+b, a-b, a*b});
return 0;
}
