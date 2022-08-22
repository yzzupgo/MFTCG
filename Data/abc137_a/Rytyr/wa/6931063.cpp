#include <stdlib.h>
#include <iostream>
#include <string>
#include <ios>
#include <vector>
using namespace std;
int main()
{
int a, b;
cin >> a >> b;
int max;
if (a + b > max)
{
max = a + b;
}
if (a - b > max)
{
max = a - b;
}
if (a * b > max)
{
max = a *b;
}
cout << max << endl;
return 0;
}
