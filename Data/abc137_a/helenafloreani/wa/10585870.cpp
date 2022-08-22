#include <iostream>
using namespace std;
int main()
{
int a, b;
cin >> a >> b;
int c = max(a + b, a - b);
cout << max(c, a + b);
}
